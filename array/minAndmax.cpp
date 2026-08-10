#include <iostream>
using namespace std;
int getmin(int num[],int n){
    int mini= INT32_MAX;
    for(int i=0; i<n ; i++){
       mini = min(mini ,num[i]);
    }
    return mini;
}

int getmax(int num[], int n){
    int maxi = INT32_MIN;
    for(int i=0; i<n; i++){
       maxi = max(maxi,num[i]);
    }
    return maxi;
}

int main(){
int size;
cout<<"Enter the size of the array : ";
cin>>size;
//then we will make a array
int num[100];
//taking input in the array
for(int i=0;i<size;i++){
    cin>>num[i];
}
cout<<"The maximum value of array is : "<<getmax(num,size)<<endl;
cout<<"The miniumum value of array is : "<<getmin(num,size)<<endl;
}
