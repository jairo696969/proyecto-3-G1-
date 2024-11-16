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
    int tipoSilla;
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
     int totalVentas = 0;
     int totalDinero = 0;
    bool sillasOcupadas[50] = {false}; // Inicializa todas las sillas como disponibles

    do {
        cout<<"\n";
        cout << "Requerimiento funcionales del 1 al 9, 0 para salir: " << endl;
        cout << "1. Asignar una silla a un pasajero." << endl;
        cout << "2. Consultar una reserva." << endl;
        cout << "3. Eliminar reserva." << endl;
        cout << "4. Buscar pasajero." << endl;
        cout << "5. Calcular el porcentaje de ocupacion del  avion"<<endl;
        cout << "6. Consultar el valor total de ventas por concepto de sillas ocupadas en el avion" << endl;
        cout << "7. Consultar el valor promedio de venta por concepto de sillas ocupadas / pasajero en el avion" << endl;
        cout << "8. Entrada." << endl;
        cout << "9. Resultado." << endl;
        cout<<"10.salir"<<endl;
   cout<<"\n";
        cin >> opcion;

        switch (opcion) {
            case 1:  {
                char continuarRegistro = 's'; // Variable para continuar con el registro

                while (continuarRegistro == 's' && totalPasajeros < 50) {
                    int numeroIdentificacion;
                    do {
                        cout << "Ingrese su número de identificación (8-10 dígitos): ";
                        cin >> numeroIdentificacion;
                        if (numeroIdentificacion > 9999999 && numeroIdentificacion <= 9999999999) {
                            cout << "Número de identificación válido." << endl;
                            break;
                        } else {
                            cout << "El número de identificación ingresado es inválido. Debe tener entre 8 y 10 dígitos." << endl;
                        }
                    } while (true);

                    cout << "Ingrese su nombre: ";
                    cin >> listaPasajeros[totalPasajeros].nombre;
                    listaPasajeros[totalPasajeros].id = numeroIdentificacion;
                    
                    // Verificación de pasaporte
                    cout << "¿Tiene pasaporte? (si / no): ";
                    cin >> listaPasajeros[totalPasajeros].pasaporte;
                    if (listaPasajeros[totalPasajeros].pasaporte == "no") {
                        cout << "No puedes ingresar, necesitas un pasaporte." << endl;
                     
                         cout << "¿Desea continuar con otro registro? (s/n): ";
                            cin >> continuarRegistro; 
                    } else if (listaPasajeros[totalPasajeros].pasaporte == "si") {
                        // Pagar y asignar silla
                           
                        cout << "El pasaje cuesta $300\n";
                        cout << "El pasaje cuesta $500 para VIP\n";
                        cout << "Ingrese su dinero para pagar: ";
                        cin >> listaPasajeros[totalPasajeros].dinero;
                        if (listaPasajeros[totalPasajeros].dinero <=299 ) {
                        cout << "No puedes ingresar, necesitas al menos $300 para pagar el ticket normal." << endl;
                     
                         cout << "¿Desea continuar con otro registro? (s/n): ";
                            cin >> continuarRegistro; 
                        } else if (listaPasajeros[totalPasajeros].dinero >= 300) 

                      do {
                        cout << "Usted quiere una silla economica o VIP?" << endl;
                        cout << "1. Silla economica" << endl;
                        cout << "2. Silla VIP." << endl;
                        cout << "3. Para salir." << endl;
                        cin >> opcion;

                        if (opcion == 1 || opcion == 2) {
                            int numerosilla;
                            bool sillaValida = false;
                            while (!sillaValida) {
                                cout << "Elija su silla (numeros pares miran a la ventana, impares al pasillo): ";
                                cin >> numerosilla;

                                if (numerosilla > 0 && numerosilla <= 50 && !sillasOcupadas[numerosilla - 1]) {
                                    sillasOcupadas[numerosilla - 1] = true; // Marca la silla como ocupada
                                    cout << "Su silla es la numero " << numerosilla << ".\n";
                                    sillaValida = true;
                                    totalDinero += (opcion ==1 ? 300 : 500);
                                } else if (numerosilla > 0 && numerosilla <= 50) {
                                    cout << "La silla " << numerosilla << " ya esta ocupada, elija otra.\n";
                                } else {
                                    cout << "Numero de siila no valido, elija un nuemero de entre 1 y 50\n";
                                }
                            }
                            break;
                        } else if (opcion == 3) {
                            cout << "Saliendo de asignacion de silla.\n";
                            break;
                        } else {
                            cout << "Opcion valida";
                        }
                    } while (true);
                        
                        cout << "Gracias. Registro exitoso.\n";
                        totalPasajeros++;

                        if (totalPasajeros < 50) {
                            cout << "¿Desea continuar con otro registro? (s/n): ";
                            cin >> continuarRegistro;
                        } else {
                            cout << "Se ha alcanzado el límite de pasajeros.\n";
                        }
                    } else {
                        cout << "Entrada inválida. Escriba 'si' o 'no'." << endl;
                    }
                }

                cout << "Pasajeros registrados: " << totalPasajeros << endl;
                cout << "______________________________________________________________________" << endl;
                for (int i = 0; i < totalPasajeros; i++) {
                    cout << "ID: " << listaPasajeros[i].id << ", Nombre: " << listaPasajeros[i].nombre
                         << ", Pasaporte: " << listaPasajeros[i].pasaporte
                         << ", Dinero: " << listaPasajeros[i].dinero << endl;
                         cout<<"______________________________________________________________________"<<endl ;
                }
                break;
            }

       case 2:{

                cout<<"Consultar una reserva:\n";
                cout<<" Se requiere que el programa pueda crear o buscar una reserva.\n";
                cout<<" Que se pueda consultar una reserva.\n";
                cout<<" Se pueda buscar cualquier reserva.\n";
                string nombreBuscado;
                cout <<"Ingrese el nombre del pasajero para consultar la reserva: ";
                cin >> nombreBuscado;
                bool encontrado = false;
                for (int i = 0; i < totalPasajeros; i++) {
                    
                if (listaPasajeros[i].nombre == nombreBuscado) {
                        cout << "Reserva encontrada: " << endl;
                        cout << "ID: " << listaPasajeros[i].id << ", Nombre: " << listaPasajeros[i].nombre << endl;
                        cout << "Pasaporte: " << listaPasajeros[i].pasaporte << ", Dinero: $" << listaPasajeros[i].dinero << endl;
                        encontrado = true;
                        break;
                    }
                }
                 if (!encontrado) {
                    cout << "No se encontró ninguna reserva con ese nombre." << endl;
                }
                break;
            }
                cout<<"\n";
                break;
            case 3:{
                cout<<"Eliminar reserva:\n";
                 cout<<" Se pueda eliminar una reserva.\n";
                 cout << "Ingrese el nombre del pasajero para eliminar la reserva: ";
                 string nombreEliminar;
                 cin >> nombreEliminar;
                 bool encontrado = false;
                    for (int i = 0; i < totalPasajeros; i++) {
                      if (listaPasajeros[i].nombre == nombreEliminar) {
                        for (int j = 0; j < 50; j++) {
                if (sillasOcupadas[j] == true) {
                    sillasOcupadas[j] = false;
                    break;
                }
            }
            }
            }
            int i;
            for (int j = i; j < totalPasajeros - 1; j++) {
                listaPasajeros[j] = listaPasajeros[j];
                listaPasajeros[1];
            }

            totalPasajeros--;

            cout<<"Reserva de " << nombreEliminar << " eliminada exitosamente.\n";
            encontrado = true;
            break;
            if (!encontrado) {
             cout <<"No se encontró ninguna reserva con ese nombre.\n";
            }
            break;
            }
            case 4:{
                cout<<"Buscar pasajero:\n";
                cout<<"Localizar un pasajero por medio de su nombre .\n";
                cout<<"Buscar pasajero:\n";
                cout<<"Localizar un pasajero por medio de su numero de silla y nombre .\n"; 
                 // Pedir el nombre del pasajero a buscar
    string nombreBusqueda;
    cout << "Ingrese el nombre del pasajero: ";
    cin >> nombreBusqueda;
   
bool encontrado = false;  // Variable para saber si encontramos al pasajero

// Recorrer la lista de pasajeros para buscar por nombre
    for (int i = 0; i < totalPasajeros; i++) {
        if (listaPasajeros[i].nombre == nombreBusqueda) {
            // Si encontramos al pasajero, mostramos sus detalles
            cout << "Pasajero encontrado:\n";
            cout << "ID: " << listaPasajeros[i].id << ", Nombre: " << listaPasajeros[i].nombre << ", Pasaporte: " << listaPasajeros[i].pasaporte<< "Dinero: " << listaPasajeros[i].dinero << endl;
            encontrado = true;
            encontrado = true;
            break;  // Ya encontramos el pasajero, no necesitamos seguir buscando
        }
    }

    // Si no se encontró el pasajero
    if (!encontrado) {
        cout << "No se encontró un pasajero con ese nombre.\n";
    }
                cout<<"\n";
        
                
                cout<<"\n";
            }
                break;
            case 5:{
                cout<<"Calcular el porcentaje de ocupacion del avion:\n";
                cout<<"Porcentaje deacuerdo a numero de sillas ocupados con respectoa a las totales  .\n";
                
                cout<<"Calcular el porcentaje de ocupación del avión:\n";
                cout<<"Porcentaje deacuerdo a numero de sillas ocupados con respectoa a las totales  .\n";
                 int sillasOcupadasCount = 0;
                for (int i = 0; i < 50; i++) {
                    if (sillasOcupadas[i]) {
                        sillasOcupadasCount++;
                    }
                }
                        sillasOcupadasCount++;
    
float porcentajeOcupacion = (float(sillasOcupadasCount) / avion1.asientos) * 100;
                cout << "El porcentaje de ocupación del avión es: " << porcentajeOcupacion << "%" << endl;
                cout<<"\n";
        }
                break;
            case 6:{
                cout<<"Consultar el valor total de ventas por concepto de sillas ocupadas en el avion:\n";
     
    int totalVentas = 0; 
    for (int i = 0; i < totalPasajeros; i++) {
        if (sillasOcupadas[i]) { 
            if (listaPasajeros[i].dinero >= 500) { 
                totalVentas += 500; // Se suma el precio de una silla VIP
            } 
            }
else {
                totalVentas += 300; // Se suma el precio de una silla económica
            }
        }
    
    
    cout << "El valor total de ventas por concepto de sillas ocupadas es: $" << totalVentas << endl;
    cout << "\n";
            }
                break;
            case 7:{
                cout<<"Consultar el valor promedio de venta por concepto de sillas ocupadas / pasajero en el avion\n";
                cout<<"La media de sillas economicas y VIP .\n";
                int sillasOcupadasCount = 0;
                for (int i = 0; i < 50; i++) {
                    if (sillasOcupadas[i]) {
                        sillasOcupadasCount++;
                    }
                }

                if (sillasOcupadasCount == 0) {
                    cout << "No hay sillas ocupadas.\n";
                } 
           
else {
                    int promedio = (int(totalDinero) / sillasOcupadasCount);
                    cout << "El valor promedio de venta por concepto de sillas ocupadas es: $" << promedio << endl;
                }
                cout<<"\n";
            }

            case 8:
                cout<<"Estrada:\n";
                cout<<"Nombre completo del pasajero.\n";
                cout<<"Numero de cedula del pasajero.\n";
                cout<<"Posicion y número de silla.\n";
                cout<<"\n";
                break;
            case 9:
                cout<<"Resultado:\n";
                cout<<"Control total del sistema de registro de pasajeros de un avion .\n";
                cout<<"\n";
                break;
                case 10:
                cout<<"Saliendo..."<<endl;
                break;
            default:
                cout << "Opcion no valida" << endl;
        }
    } while (opcion != 10);

   

 cout << "\nEstructuras:\n";
    cout << "Estructura del Avion\n";
    cout << "Modelo: " << avion1.modelo << endl;
    cout << "Aerolinea " << avion1.aerolinea << endl;
    cout << "Tiempo de vuelo (horas): " << avion1.vuelo << endl;
    cout << "Condicion del avion " << (avion1.condicion ? "Operativo" : "No operativo") << endl;
    cout << "Asientos disponibles: " << avion1.asientos << endl;
    cout << "\nEstructura de la tripulacion";
    cout << "\nID: " << tripulacion.id << endl;
    cout << "Nombre: " << tripulacion.nombre << endl;
    cout << "Codigo de carnet: " << tripulacion.codigocarnet << endl;
    
    return 0;


}


