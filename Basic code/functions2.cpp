#include<iostream>
using namespace std;
string merge(string string1 , string string2);
int main(){
string firstName = "Kumar";
string secondName = "Rishi";
string lastName = "wassup";
string fullname = merge(firstName,secondName);
cout<<"Hello " << fullname;
    return 0;
}
string merge(string string1 , string string2){
string name = string1 +" " + string2;
    return name;
}
