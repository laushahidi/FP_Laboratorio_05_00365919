#include <iostream>

using namespace std;

int main(){
    int i, n; 
    long f;
    cout << "Ingrese un número ";
    cin >> n;
    
    f = 1;
    i = 1;
    
        while(i <= n){
          f *= i;
          i++;
        }
     cout << f;
return 0;
}