#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main(){
    system("cls");
double a , b , c;
cout << "enter the value of a : ";
cin >> a ; 
cout <<" enter the value of b : ";
cin >> b ;
a = pow (a,2);
b = pow (b,2);
c = sqrt(a+b);
cout << " value of c is : " << c;
return 0;
} 
