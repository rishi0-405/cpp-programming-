#include <iostream>
using namespace std;
int main(){
//&& = checks that two conditions are true 
//|| = checks that atleast one condition is true 
double temp;
cout<<"Enter the temprature: ";
cin>> temp;
if(temp>0 && temp <30){
cout<<"the temprature is good ";
}
else{
    cout<<"the temprature is bad";
}
}
