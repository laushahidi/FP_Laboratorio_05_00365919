#include <iostream>

using namespace std;

int main()
{
    float n, r, i, x, s;
    cout << "Media aritmética\n";
    cout << "Ingrese la cantidad de números a ingresar\n";
    cin >> n;
    
    cout << "\nIngrese los números\n";
    for(i = 1; i <= n; i = i + 1){
        cin >> x;
        s += x;
    }
    r = s/n;
    cout << "La media aritmética es: "<<r<<"";

    return 0;
}