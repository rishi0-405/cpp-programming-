#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
  system("cls");
 int i , num1 , factorial = 1;
 cout<< " enter the number to find factorial : ";
 cin>>num1;
 for(int i = 1; i<=num1; i++)
 {
    factorial = factorial * i;
 }
cout<<"your factorial is :"<< factorial;
    return 0;
}
