// mysql_c.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include "Cliente.h"

using namespace std;
int main()
{
    string nit, nombres, apellidos, direccion, fecha_nacimiento;
    int telefono;
    
    cout << "Ingresar nit:";
    getline(cin, nit);
    cout << "Ingresar nombres:";
    getline(cin, nombres);
    cout << "Ingresar apellidos:";
    getline(cin, apellidos);
    cout << "Ingresar direccion:";
    getline(cin, direccion);
    cout << "Ingresar telefono:";
    cin >> telefono;
    cin.ignore();
    cout << "Ingrese fecha de nacimiento:";
    cin >> fecha_nacimiento;
     
    Cliente c = Cliente(nombres,apellidos,direccion,telefono,fecha_nacimiento,nit);
    c.crear();
    c.leer();

    system("pause");
    return 0;
}
