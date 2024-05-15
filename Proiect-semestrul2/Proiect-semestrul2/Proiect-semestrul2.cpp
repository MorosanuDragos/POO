#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

struct Persoana {
    unsigned id;
    unsigned grupa;
    char domiciliu[20];
};
class Pers {
private:
    unsigned id;
    unsigned grupa;
    char domiciliu[20];
public:
    Pers(unsigned id1, unsigned grupa1, char* domiciliu1) {
        id = id1;
        grupa = grupa1;
        strcpy_s(domiciliu, 20, domiciliu1);
    }
    ~Pers() {}
    unsigned arata_id() { return this->id; }
    unsigned arata_grupa() { return this->grupa; }
    char* arata_domiciliu() { return this->domiciliu; }
};

int main()
{
    Console::WriteLine("Introduceti numarul de persoane: ");
    int nr_persoane;
    cin >> nr_persoane;
    Persoana* persoane = new Persoana[nr_persoane];
    for (int i = 0; i < nr_persoane; i++) {
        Console::WriteLine("Introduceti id-ul persoanei {0}: ", i + 1);
        unsigned id;
        cin >> id;
        persoane[i].id = id;
        Console::WriteLine("Introduceti grupa din care face parte persoana {0}: ", i + 1);
        unsigned grupa;
        cin >> grupa;
        persoane[i].grupa = grupa;
        Console::WriteLine("Introduceti domiciliul persoanei {0}: ", i + 1);
        char domiciliu[20];
        cin >> domiciliu;
        strcpy_s(persoane[i].domiciliu, 20, domiciliu);
    }
    Console::WriteLine("Afisam id-ul, grupa si domiciliul persoanelor: ");
    for (int i = 0; i < nr_persoane; i++) {
        cout << persoane[i].id << "\t" << persoane[i].grupa << "\t" << persoane[i].domiciliu << endl;
    }
    Console::ReadKey();
    return 0;
}