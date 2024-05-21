#include <iostream>
// #include "variables.h"
using namespace std;

struct
{
    char cif[60];
    char name[60];
    char lastname[60];
    int year;
} person;

int main(int argc, char const *argv[])
{
    /* code */
    cout << "CIF: ";
    cin >> person.cif;
    cout << "Nombre: ";
    cin >> person.name;

    cout << person.cif << " - " << person.name << endl;
    return 0;
};