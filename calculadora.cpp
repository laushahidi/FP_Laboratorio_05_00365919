#include <iostream>

using namespace std;

int ponermenu(){
    cout << "Calculadora básica \n1. Suma de dos números \n2. Resta de dos números \n3. Multiplicacion de dos números \n4. División de dos números \n5. Fibonacci de un número \n6. Factorial de un número \n7. Salir \n";
    return 0;
}
int suma(){
    float x, y, r;
    cout << "\nSuma: ingrese dos números\n";
    cin >> x;
    cin >> y;
    r = x + y;
    cout << "\nResultado "<<r<<"" << endl;
    return 0;
}

int resta(){
    float x, y, r;
    cout << "\nResta: ingrese dos números\n";
    cin >> x;
    cin >> y;
    r = x - y;
    cout << "\nResultado "<<r<<"" << endl;
    return 0;
}

int multiplicacion(){
    float x, y, r;
    cout << "\nMultiplicacion: ingrese dos números\n";
    cin >> x;
    cin >> y;
    r = x * y;
    cout << "\nResultado "<<r<<"" << endl;
    return 0;
}

int division(){
    float x, y, r;
    cout << "\nDivision: ingrese dos números\n";
    cin >> x;
    cin >> y;
    while(y==0){
        cout << "\nIngrese un número diferente a cero\n";
        cin >> y;
    }
    r = x / y; 
    cout << "\nResultado "<<r<<"" << endl;
    return 0;
}

int fibonacci(){
    long n, r, i, x, y;
   
   cout << "\nFibonacci: ingrese un número\n";
   cin >> n;
   cout << "\nResultado\n";
   
   if(n==0){
       r=0;
       cout << r << endl;
   }
   else if(n==1){
       r=1;
       cout << 0 << endl;
       cout << r << endl;
   }
   else{
       x=0;
       y=1;
       i=2;
       cout << 0 << endl;
       cout << 1 << endl;
       while(i<=n){
           i+=1;
           r=x+y;
           cout << r << endl;
           x=y;
           y=r;
       }
   }
   return 0;
}

int factorial(){
    long i, n, f;
    cout << "\nFactorial: ingrese un número \n";
    cin >> n;
    
    f = 1;
    i = 1;
    
        while(i <= n){
          f *= i;
          i++;
        }
     cout << "\nResultado "<<f<<"" << endl;
return 0;
}

int main()
{
    int n;
   ponermenu();
   cout << "\nIngrese la opción\n";
   cin >> n;
   while(n!=7){
       switch(n){
           case 1:
           suma();
           break;
           case 2:
           resta();
           break;
           case 3:
           multiplicacion();
           break;
           case 4:
           division();
           break;
           case 5:
           fibonacci();
           break;
           case 6:
           factorial();
           break;
           default: 
           cout << "\nPor favor ingrese un número entre 1 y 7\n";
       }
    cout << "\nIngrese otra opción\n";
    cin >> n;
   }
    return 0;
}