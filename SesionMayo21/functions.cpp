#include <iostream>
#include "variables.h"
using namespace std;

/*
C CREATE
R READ
U UPDATE
D DELETE
*/

// create
void addReg();
void showReg();
void menu();

void addReg(){
    cout << "Datos del estudiante\n";
    cout << "CIF: ";
    scanf(" %[^\n]", people[pos].cif);
    cout << "NOMBRE: ";
    scanf(" %[^\n]", people[pos].name);
    cout << "APELLIDO: ";
    scanf(" %[^\n]", people[pos].lastname);
    cout << "AÑO: ";
    scanf("%d", &people[pos].year);
}


void showReg()
{
    for (int i = 0; i < pos; i++)
    {
        printf("Nombre: %s %s \nAño: %d", people[i].name, people[i].lastname, people[i].year);
        cout << "*************************\n";
    }
}

void menu()
{
    int op = 0;
    do
    {
        system("cls || clear");
        cout << "1. Agregar \n";
        cout << "2. Mostrar \n";
        cout << "3. Salir \n";
        cout << "Opcion: ";
        cin >> op;
        switch (op)
        {
        case 1:
            addReg();
            system("pause");
            break;
        case 2:
            showReg();
            system("pause");
            break;
        case 3:
            cout << "Adios" << endl;
            break;
        default:
            break;
        }

    } while (op != 3);
}