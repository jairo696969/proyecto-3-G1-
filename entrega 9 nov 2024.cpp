#include <iostream>
#include <string>
using namespace std;

struct Tripulacion {
    int id;
    string nombre;
    string codigocarnet;
    string papeles;
} tripulacion = {1088437721, "Jack Clibers", "12e344t89"};

struct Pasajeros {
    int id;
    string nombre;
    string pasaporte;
    int dinero;
};

struct Avion {
    char modelo[200];
    string aerolinea;
    float vuelo;
    bool condicion;
    int asientos;
} avion1 = {"ATP-400", "Firebird", 180.5, true, 50};

int main() {
    int opcion;
    Pasajeros listaPasajeros[50];
    int totalPasajeros = 0;
    bool sillasOcupadas[50] = {false}; // Inicializa todas las sillas como disponibles
    bool no=false;
    bool valido=false;

    do {
        cout << "Requerimiento funcionales del 1 al 9, 0 para salir: " << endl;
        cout << "1. Asignar una silla a un pasajero." << endl;
        cout << "2. Consultar una reserva." << endl;
        cout << "3. Eliminar reserva." << endl;
        cout << "4. Buscar pasajero." << endl;
        cout << "5. Calcular el porcentaje de ocupaci�n del avi�n." << endl;
        cout << "6. Consultar el valor total de ventas por concepto de sillas ocupadas en el avi�n." << endl;
        cout << "7. Consultar el valor promedio de venta por concepto de sillas ocupadas / pasajero en el avi�n." << endl;
        cout << "8. Entrada." << endl;
        cout << "9. Resultado." << endl;
   cout<<"\n";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "Asignar una silla a un pasajero: Ingresar, registrar y controlar las reservas de un avi�n.\n";

                char continuarRegistro = 's'; // Variable para continuar con el registro

                while (continuarRegistro == 's' && totalPasajeros < 50) {
                   
                    int numeroIdentificacion;
                    do {
                        cout << "Ingrese su n�mero de identificaci�n (8-10 d�gitos): ";
                        cin >> numeroIdentificacion;
                        if (numeroIdentificacion > 9999999 && numeroIdentificacion <= 9999999999) {
                            cout << "N�mero de identificaci�n v�lido." << endl;
                            break;
                        } else {
                            cout << "El n�mero de identificaci�n ingresado es inv�lido. Debe tener entre 8 y 10 d�gitos." << endl;
                        }
                    } while (true);

                    cout << "Ingrese su nombre: ";
                    cin >> listaPasajeros[totalPasajeros].nombre;
                    listaPasajeros[totalPasajeros].id = numeroIdentificacion;
                    
                    int opcion;
    do
    {
        cout << "Si usted va a viajar con 5 hijos, por favor esciebir 1 y dijite sus edades (los ni�os tienen que ser menores de edad) "<<endl;
         cout << "Si usted no cumple este requisito o termin� con este, pas� a la siguiente parte escribiendo 2 "<<endl;
        cin>>opcion;
        
        switch (opcion)
        {
            case 1:
            {
                cout<< "Escriba las edades de sus hijos."<<endl;
                    int edad[5];
                    cout<<"ingrese las edades\n";
                    for (int a; a<5; a++){
                    do{
                    cin>>edad[a];
                    if (edad[a]<1 or edad[a]>17)
                    cout<<"Una edad no es valida intentelo nuevamente\n";    //Esta es la parte de entrega 9/11/2014//
                    }while (edad[a]<1);
                    }
                    }
                    break;
                    case 2:
                    {
            
                    cout<<"siga con registro."<<endl;
                
                    }
                    break;
                    default:
                    cout<<"opci�n no valida.";
                    }
                    }while(opcion != 2);
                    
                    
                    
                    
                    
                    do {
                    cout << "�Tiene pasaporte? (si / no): ";
                    cin >> listaPasajeros[totalPasajeros].pasaporte;
                    if (listaPasajeros[totalPasajeros].pasaporte == "si") {
                    no=true;}
                    else {
                    cout << "Lo siento no puede pasar." << endl;
                    }
                    }
                     while (!no);

                    do {
                    int dinero, billetes = 300;
                    cout<<"El pasaje cuesta $300\n";
                    cout << "Ingrese su dinero para pagar: ";
                    cin >> listaPasajeros[totalPasajeros].dinero;
                    if (listaPasajeros[totalPasajeros].dinero >= 300) {
                    valido=true;}
                    else {
                    cout << "Lo siento no puede pasar." << endl;
                    }
                    }
                     while (!valido);
                   
                    do {
                        cout << "Usted quiere una silla economica o VIP?" << endl;
                        cout << "1. Silla econ�mica" << endl;
                        cout << "2. Silla VIP." << endl;
                        cout << "3. Para salir." << endl;
                        cin >> opcion;

                        if (opcion == 1 || opcion == 2) {
                            int numerosilla;
                            bool sillaValida = false;
                            while (!sillaValida) {
                                cout << "Elija su silla (n�meros pares miran a la ventana, impares al pasillo): ";
                                cin >> numerosilla;

                                if (numerosilla > 0 && numerosilla <= 50 && !sillasOcupadas[numerosilla - 1]) {
                                    sillasOcupadas[numerosilla - 1] = true; // Marca la silla como ocupada
                                    cout << "Su silla es la n�mero " << numerosilla << ".\n";
                                    sillaValida = true;
                                } else if (numerosilla > 0 && numerosilla <= 50) {
                                    cout << "La silla " << numerosilla << " ya est� ocupada, elija otra.\n";
                                } else {
                                    cout << "N�mero de silla no v�lido, elija un n�mero entre 1 y 50.\n";
                                }
                            }
                            break;
                        } else if (opcion == 3) {
                            cout << "Saliendo de asignaci�n de silla.\n";
                            break;
                        } else {
                            cout << "Opci�n no v�lida.\n";
                        }
                    } while (true);

                    cout << "Gracias. Registro exitoso.\n";
                    totalPasajeros++;

                    if (totalPasajeros < 50) {
                        cout << "�Desea continuar con otro registro? (s/n): ";
                        cin >> continuarRegistro;
                    } else {
                        cout << "Se ha alcanzado el l�mite de pasajeros.\n";
                    }
                }
                cout << "Pasajeros registrados: " << totalPasajeros << endl;
             cout<<"______________________________________________________________________"<<endl;   
             cout << "Pasajeros registrados: " << totalPasajeros << endl;
                for (int i = 0; i < totalPasajeros; i++) {
                    cout << "ID: " << listaPasajeros[i].id << ", Nombre: " << listaPasajeros[i].nombre
                         << ", Pasaporte: " << listaPasajeros[i].pasaporte
                         << ", Dinero: " << listaPasajeros[i].dinero << endl;
             cout<<"______________________________________________________________________"<<endl ;  

                }
                break;
            }
       
        
            case 2:
                cout<<"Consultar una reserva:\n";
                cout<<" Se requiere que el programa pueda crear o buscar una reserva.\n";
                cout<<" Que se pueda consultar una reserva.\n";
                cout<<"\n";
                break;
            case 3:
                cout<<"Eliminar reserva:\n";
                 cout<<" Se pueda eliminar una reserva.\n";
                break;
            case 4:
                cout<<"Buscar pasajero:\n";
                cout<<"Localizar un pasajero por medio de su numero de silla y nombre .\n";
                cout<<"\n";
                break;
            case 5:
                cout<<"Calcular el porcentaje de ocupaci�n del avi�n:\n";
                cout<<"Porcentaje deacuerdo a numero de sillas ocupados con respectoa a las totales  .\n";
                cout<<"\n";
                break;
            case 6:
                cout<<"Consultar el valor total de ventas por concepto de sillas ocupadas en el avi�n:\n";
                cout<<"Suma de todas sillas ocupadas .\n";
                cout<<"\n";
                break;
            case 7:
                cout<<"Consultar el valor promedio de venta por concepto de sillas ocupadas / pasajero en el avi�n:\n";
                cout<<"La media de sillas economicas y VIP .\n";
                cout<<"\n";
            case 8:
                cout<<"Estrada:\n";
                cout<<"Nombre completo del pasajero.\n";
                cout<<"Numero de cedula del pasajero.\n";
                cout<<"Posicion de silla prefreferencial.\n";
                cout<<"\n";
                break;
            case 9:
                cout<<"Resultado:\n";
                cout<<"Control total del sistema de registro de pasajeros de un avion .\n";
                cout<<"\n";
                break;
            default:
                cout << "Opci�n no v�lida." << endl;
        }
    } while (opcion != 0);

   

 cout << "\nEstructuras:\n";
    cout << "Estructura del Avi�n:\n";
    cout << "Modelo: " << avion1.modelo << endl;
    cout << "Aerol�nea: " << avion1.aerolinea << endl;
    cout << "Tiempo de vuelo (horas): " << avion1.vuelo << endl;
    cout << "Condici�n del avi�n: " << (avion1.condicion ? "Operativo" : "No operativo") << endl;
    cout << "Asientos disponibles: " << avion1.asientos << endl;
    cout << "\nEstructura de la tripulaci�n:";
    cout << "\nID: " << tripulacion.id << endl;
    cout << "Nombre: " << tripulacion.nombre << endl;
    cout << "C�digo de carnet: " << tripulacion.codigocarnet << endl;
    
    return 0;


    return 0;
}


