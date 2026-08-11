#include <iostream>
using namespace std;
int sumOFarray(int num[], int size){
    int currentsum = 0;
    for(int i=0; i<size; i++){
        currentsum += num[i];
    }
    return currentsum;
}

int main(){
int size;
cout<<"Enter the size of the array :";
cin>>size;

int num[100];
cout<<"Enter the elements of the array : ";
for(int i=0; i<size; i++){
     cin>>num[i];
}
int totalSum = sumOFarray(num,size);
cout<<"sum of array is : "<<totalSum;
}
