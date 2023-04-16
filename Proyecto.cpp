#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct venta{

    int numtel, tippa;
    char nomcom[20];
    char modtel[20];
    char nomp[20];
    char apep[20];
    char dir[30];
    float total;

};

int nreg = 0, counts = 0;
int busqueda;
char resp;
string pago;

venta *venta_n = new venta[nreg];


void agregar();
void mostrar();
void cambiar();

int main(){

    int option;

    cout<<"Bienvenido al sistema"<<endl;
    system("pause");
    system("cls");

    do{

    system("cls");

    cout<<"Elija una opcion"<<endl;
    cout<<endl;
    cout<<"Menu"<<endl;
    cout<<"---------------------"<<endl;
    cout<<"1. Ingresar nueva venta"<<endl;
    cout<<"2. Modificar venta"<<endl;
    cout<<"3. Visualizar ventas"<<endl;
    cout<<"4. Salir"<<endl;

    cin>>option;

    system("cls");

    switch(option){

    case 1:
        agregar();
        break;

    case 2:
        cambiar();
        break;

    case 3:
        mostrar();
        break;

    case 4:
        cout << "Fin del programa" << endl;
        break;

    default:
        cout << "Opcion desconocida!" << endl;
        system("pause");
        break;
    }

    }while(option != 4);
}

void agregar(){
        do{
        system("cls");

        nreg = nreg + 1;

        cout<<"Dato N["<<nreg<<"]"<<endl;
        cout<<"----------------------"<<endl;

        cout << "Ingrese el numero telefonico:" << endl;
        cin >> venta_n[nreg].numtel;
        cout << "Ingrese el nombre de la compania del telefono:" << endl;
        cin.ignore();
        cin.getline(venta_n[nreg].nomcom,20,'\n');
        cout << "Ingrese el modelo del telefono:" << endl;
        cin.getline(venta_n[nreg].modtel,20,'\n');
        cout << "Ingrese el nombre del propietario:" << endl;
        cin.getline(venta_n[nreg].nomp,20,'\n');
        cout << "Ingrese el apellido del propietario:" << endl;
        cin.getline(venta_n[nreg].apep,20,'\n');
        cout << "Ingrese la direccion del propietario:" << endl;
        cin.getline(venta_n[nreg].dir,30,'\n');
        cout << "Ingrese el tipo de pago mensual:" << endl;
        cout << "1. Prepago" << endl;
        cout << "2. Postpago" << endl;
        cin >> venta_n[nreg].tippa;

        cout << "Desea seguir ingresando datos? S/N"<<endl;
        cin >> resp;

        }while(resp=='s' || resp=='S');
}

void mostrar(){

        cout<<"Visualizacion de datos"<<endl;
        cout<<"----------------------"<<endl;

        counts = nreg + 1;

        for(int i = 1; i < counts; i++){

        if(venta_n[i].tippa == 1){

        pago = "Prepago";

        } else if(venta_n[i].tippa == 2){

        pago = "Postpago";

        }

        cout<<endl;
        cout<<"Dato N["<<i<<"]"<<endl;
        cout<<"----------------------"<<endl;

        cout << "Numero Telefonico: " << venta_n[i].numtel << endl;
        cout << "Nombre de la compania del telefono: " << venta_n[i].nomcom << endl;
        cout << "Modelo del telefono: " << venta_n[i].modtel << endl;
        cout << "Nombre del propietario: " << venta_n[i].nomp << endl;
        cout << "Direccion del propietario: " << venta_n[i].apep << endl;
        cout << "Tipo de pago mensual: " << pago << endl;
        cout<<endl;

        }

        counts = nreg - 1;

        system("pause");
}

void cambiar(){
                cout << "Ingrese el numero de telefono: ";
                cin >> busqueda;

                counts = nreg + 1;

                for (int i = 0; i < counts; i++){

                    if(venta_n[i].tippa == 1){

                    pago = "Prepago";

                    } else if(venta_n[i].tippa == 2){

                    pago = "Postpago";

                    }

                    if (venta_n[i].numtel == busqueda){
                        cout<<"Dato N["<<i<<"]"<<endl;
                        cout<<"----------------------"<<endl;

                        cout << "Numero Telefonico: " << venta_n[i].numtel << endl;
                        cout << "Nombre de la compania del telefono: " << venta_n[i].nomcom << endl;
                        cout << "Modelo del telefono: " << venta_n[i].modtel << endl;
                        cout << "Nombre del propietario: " << venta_n[i].nomp << endl;
                        cout << "Direccion del propietario: " << venta_n[i].apep << endl;
                        cout << "Tipo de pago mensual: " << pago << endl;

                        cout<<endl;

                        cout << "Ingrese el numero telefonico:" << endl;
                        cin >> venta_n[i].numtel;
                        cout << "Ingrese el nombre de la compania del telefono:" << endl;
                        cin.ignore();
                        cin.getline(venta_n[i].nomcom,20,'\n');
                        cout << "Ingrese el modelo del telefono:" << endl;
                        cin.getline(venta_n[i].modtel,20,'\n');
                        cout << "Ingrese el nombre del propietario:" << endl;
                        cin.getline(venta_n[i].nomp,20,'\n');
                        cout << "Ingrese el apellido del propietario:" << endl;
                        cin.getline(venta_n[i].apep,20,'\n');
                        cout << "Ingrese la direccion del propietario:" << endl;
                        cin.getline(venta_n[i].dir,30,'\n');
                        cout << "Ingrese el tipo de pago mensual:" << endl;
                        cout << "1. Prepago" << endl;
                        cout << "2. Postpago" << endl;
                        cin >> venta_n[i].tippa;


                    }
                }
        system("pause");
}
