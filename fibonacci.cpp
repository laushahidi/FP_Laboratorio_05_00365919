#include <iostream>

using namespace std;

int main(){
   
   long n, r, i, x, y;
   
   cout << "Serie fibonacci \nIngrese un número\n";
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