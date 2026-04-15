#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    system("cls");
     int i , num1 , p = 0;
     cout<<" enter a number to check if its prime or not :";
     cin>>num1;

for(i = 1; i<=num1 ; i++){
   if(num1 % i == 0)
    {
          p++;
   }
}
   if(p ==2){
    cout<<"prime";
   }

   else{
    cout<<"not prime";
   }

}
