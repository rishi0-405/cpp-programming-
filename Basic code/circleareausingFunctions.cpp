#include<iostream>
#include<stdlib.h>
using namespace std;
double circlearea(double radius , double PI);
int main(){
    system("cls");
const double PI = 3.141592653;
double radius;
cout<<"Enter the radius : ";
cin>>radius;
double areaOfCircle = circlearea (radius,PI);
cout<<"Area of Circle : " <<areaOfCircle;
    return 0;
}
double circlearea(double radius , double PI){
    double result = PI * radius * radius;
    return result;
}
