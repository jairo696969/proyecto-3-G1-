#include <iostream>
using namespace std;
 struct tripulacion{
    int id;
    string nombre;
    string codigocarnet;
    string papeles;
 }
 tripulacion = {1088437721,"Jack Clibers","12e344t89"};
 struct pasajeros{
    int id;
    string nombre;
    bool pasaporte;
    int dinero;;
 };
 
 struct avion {
     char modelo[200];
     string aerolinea;
     float vuelo;
     bool condicion;
     int asientos;
 }
 avion1 = {"ATP-400","Firebird",180.5,1,50};
 int main()
{
    int opcion;
    cout<<"Requirimiento funcionales del 1 al 4, 5 para salir: "<<endl;
        cout<<"1. Nombre."<<endl;
        cout<<"2. Resumen."<<endl;
        cout<<"3. Entradas."<<endl;
        cout<<"4. Resultado."<<endl;
    do
    
    {
     
        cin>>opcion;
        
        switch (opcion)
        {
            case 1:
            {
                 cout<<"Nombre: Ingresar,registrar y controlar las reservas de un avion.\n";
            }
            break;
            case 2:
            {
                cout<<"Resumen:\n";
                cout<<" Se requiere que el programa asigne un silla a um pasajero.";
                cout<<"Buenos dias su numero de identificacion y su nombre por favor.\n";
    cout<<"Lista tickets del vuelo: \n ";
    int tickets[50];
    int i;
    for (int i=0; i<2  ; i = i+1)
    {
        
        string numeroIdentificacion;

    cout << "Ingrese su número de identificación: ";
    cin >> numeroIdentificacion;

    // Verificamos si la longitud de la cadena es mayor a 10
    if (numeroIdentificacion.length() > 10) {
        cout << "El número de identificación ingresado es inválido. Debe tener como máximo 10 dígitos." << endl;
    } else {
        cout << "Número de identificación válido." << endl;
    }
    string nombreIdentificacion;

    cout << "Ingrese un nombre: ";
    cin >> nombreIdentificacion;

    // Verificamos si la longitud de la cadena es mayor a 15
    if (nombreIdentificacion.length() > 15) {
        cout << "El nombre de identificación ingresado es inválido. Debe tener como máximo 15 dígitos." << endl;
    } else {
        cout << "Nombre: Registrado." << endl;
    }
    int opcion;
    do
    {
        cout<<"Usted quiere una silla economica o VIP?"<<endl;
        cout<<"1. silla economica"<<endl;
        cout<<"2. silla VIP."<<endl;
        cout<<"3. para salir."<<endl;
        cin>>opcion;
        switch (opcion)
        {
            case 1:
            {
                int numerosilla;
   for (int s=1;s<=1;s++){
       cout<<"Elija su silla teniendo en cuenta que los numeros pares son siilas que miran \na la venta y los numeros impraes miran al pasillo del avion\n";
       cin>>numerosilla;
     cout<<"Su silla es la numero  "<<numerosilla<<endl;
   } 
                }
            break;
            case 2:
            {
                int numerosilla;
   for (int s=1;s<=1;s++){
       cout<<"Elija su silla teniendo en cuenta que los numeros pares son siilas que miran \na la venta y los numeros impraes miran al pasillo del avion\n";
       cin>>numerosilla;
     cout<<"Su silla es la numero  "<<numerosilla<<endl;
   }
            }
            break;
            default:
             cout<<"opción no valida.";
        }
    }while(opcion != 3);
    
    
    cout<<"Tome su pasaje gracias.\n";
   cout<<"Siguiente en la fila por favor.\n";
   cout<<"\n";
   //cout<<"Buenos dias su numero de identificacion y su nombre por favor.\n";
   }
                cout<<" Que se pueda consultar una reserva.\n";
                cout<<" Se pueda eliminar una reserva.\n";
                cout<<" Se pueda buscar cualquier reserva.\n";
                cout<<" Se pueda calcular el porcentaje total del avion .\n";
                cout<<" Se Calcule el valor total de ventas por concepto de sillas ocupadas.\n";
                cout<<" Poder calcular el valor promedio de venta por concepto de sillas ocupadas.\n";
            }
            break;
            case 3:
            {
                cout<<"Estrada:\n";
                cout<<"Nombre completo del pasajero.\n";
                cout<<"Numero de cedula del pasajero.\n";
                cout<<"Posicion de silla prefreferencial.\n";
                cout<<"Alguna enfermedad o conficion.\n";
                cout<<"Pasaporte Por persona.\n";
                cout<<"Nombre del pasajero.\n";
            }
            break;
            case 4:
            {
                cout<<"Resultado:\n";
                cout<<"Control total del sistema de registro de pasajeros de un avion .\n";
            }
            break;
            default:
             cout<<"opción no valida.";
        }
    }while(opcion != 5);
    
    cout<<"\n";
    cout<<"\nEstructuras:\n";
    cout<<"Estructura del Avion:\n";
    cout<<"Modelo: "<<avion1.modelo<<endl;
    cout<<"Aerolinea: "<<avion1.aerolinea<<endl;
    cout<<"Tiempo de vuelo (horas): "<<avion1.vuelo<<endl;
    cout<<"Condicion del avion: "<<avion1.condicion<<endl;
    cout<<"Asientos disponibles: "<<avion1.asientos<<endl;
    cout<<"\nEstructura de la tripulacion:";
    cout<<"\nID: "<<tripulacion.id<<endl;
    cout<<"nombre: "<<tripulacion.nombre<<endl;
    cout<<"codigo de carnet: "<<tripulacion.codigocarnet<<endl;
    
     //Se repetira la accion para las 50 personas
    cout<<"\nEstructura de los pasajeros:";
    for (int i=1; i<50  ; i = i++)
    {
    pasajeros personas;
    cout<<"\nId: \n";
    cin>>personas.id;
    cout<<"Nombre: \n";
    cin>>personas.nombre;
    cout<<"Tiene su pasaporte? 1 = si 0 = no: \n";
    cin>>personas.pasaporte;
    cout<<"Ingrese su dinero para pagar: \n";
    cin>>personas.dinero;
    cout<<"Gracias. Siguiente: \n";
    }
}
