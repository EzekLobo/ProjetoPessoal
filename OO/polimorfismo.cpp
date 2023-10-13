#include <iostream>
#include <string>

using namespace std;

class Flor {
public:
    virtual void exibirInfo() {
        cout << "Esta é uma flor genérica." << endl;
    }
};

class Rosa : public Flor {
public:
    void exibirInfo() override {
        cout << "Esta é uma rosa." << endl;
    }
};

class Lirio : public Flor {
public:
    void exibirInfo() override {
        cout << "Este é um lírio." << endl;
    }
};

int main() {
    Flor* flor1 = new Rosa();
    Flor* flor2 = new Lirio();

    flor1->exibirInfo();
    flor2->exibirInfo();

    delete flor1;
    delete flor2;

    return 0;
}
