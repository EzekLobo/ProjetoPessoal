template<typename T>
int partition(vector<T>& V, int start, int end)
{
    T pivot = V[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (V[i] <= pivot)
            count++;
    }
    int pivotIndex = start + count;
    swap(V[pivotIndex], V[start]);
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (V[i] <= pivot) {
            i++;
        }
        while (V[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(V[i++], V[j--]);
        }
    }
    return pivotIndex;
}



int quickSort(vector<T>& V, int start, int end)
{
    if (start >= end)
        return 0;
    int p = partition(V, start, end);
    int swaps = end - start;
    swaps += quickSort(V, start, p - 1);
    swaps += quickSort(V, p + 1, end);
    return swaps;
}
