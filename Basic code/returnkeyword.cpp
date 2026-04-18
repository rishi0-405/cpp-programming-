#include<iostream>
using namespace std;
double volumecuboid(double length , double breadth , double height);
int main()
{
double length;
double breadth;
double height;

cout<<"enter the length : ";
cin>>length;
cout<<"enter the breadth : ";
cin>>breadth;
cout<<"enter the height : ";
cin>>height;
double volumeOfCuboid = volumecuboid(length,breadth,height);
cout<<"Volume of cuboid is : " <<volumeOfCuboid;
    return 0;
}
double volumecuboid(double length , double breadth , double height){
double result = length * breadth * height;
    return result;
}
