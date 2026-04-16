#include<iostream>
#include<ctime>
#include<stdlib.h>
using namespace std;
int main(){
    system ("cls");
    int number;
    int guess;
   
    srand(time(NULL));
    number = (rand() % 100) + 1;
    cout<<"****** NUMBER GUESSING GAME ******"<<endl;
    
    do{
      cout<<"Enter a guess between (1-100) : ";
      cin>>guess;

      if(guess>number){
        cout<<" TOO HIGH! \n";
      }
      else if (guess<number){
        cout<<"TOO LOW! \n";
      }
      else {
        cout<<"CORRECT" <<'\n';
      }
    

      
    }  while(guess != number);

    cout<<"*************************************************";
    return 0;
}
