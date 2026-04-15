#include<iostream>
using namespace std;
int main (){
    int rows;
    int columns;
    char symbol;
    cout<<"enter the number of rows : ";
    cin>>rows;
    cout<<"enter the number of columns : ";
    cin>>columns;
    cout<<"enter a symbol to make rectangle out of : ";
    cin>>symbol;
for (int i=1; i<=rows; i++){
    for(int j=1; j<=columns; j++){
cout<< symbol;
    }
    cout<< endl;
}
}
