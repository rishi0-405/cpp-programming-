#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    system("cls");
double temp;
char unit;
cout<<"F = Farenhite"<<endl;
cout<<"C = Celsius "<<endl;
cout<<"What unit would you like to convert in : ";
cin>>unit;
if(unit=='C'|| unit=='c'){
cout<<"Enter the temprature in Farenhite: ";
cin>>temp;
temp = (temp - 32)/ 1.8;
cout<< "Temprature is : "<<temp<<"C";
}
else if(unit=='F'|| unit=='f'){
cout<<"Enter the temprature in Celsius: ";
cin>>temp;
temp = (1.8 * temp) + 32;
cout<< "Temprature is : "<<temp<<"F";
}
else {
    cout<<"Enter a valid unit (C/F)";
}
}
