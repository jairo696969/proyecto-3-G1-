#include <iostream>
using namespace std;
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
                
                /*{
                cout<<"Tipo de pasajero.\n";
                if (Familiar==0, Personal==1 and Negocios==2)
                cout<<"Este pasajero viajara con un viaje."
                cin>> tipo;
                }
                */
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
}





