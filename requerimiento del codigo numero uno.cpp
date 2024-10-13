#include <iostream>
using namespace std ;
int main()
{
    int c; 
    cout << "Ingrese el número de cedula o targeta de identidad: ";
    cin >> c;

    {
    char n; 
    cout << "Ingrese su nombre : ";
    cin >> n;

    
   srand (time(NULL));
   int num;
   
   for (int s=1;s<=1;s++){
     int num = (rand() % 50) + 1 ; 
     cout<<"Su silla es la numero  " <<num<<endl;
   }
   
       
           
       
   } 
       
   
   
    return 0;
}
