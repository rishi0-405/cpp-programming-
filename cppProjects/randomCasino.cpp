#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main(){
system ("cls");
srand(time(0));
int randnum = rand() % 16 + 1;
switch(randnum){
case 1:
cout<<"you won sticker";
break;
case 2:
cout<<"you won 2 ruppes";
break;
case 3:
cout<<"you won 5 ruppes";
break;
case 4:
cout<<"you won a trip to singapore";
break;
case 5:
cout<<"you won nothing";
break;
case 6:
cout<<"you won a burger ";
break;
case 7:
cout<<"you won 1 rupees";
break;
case 8:
cout<<"you won a keypard";
break;
case 9:
cout<<"you won 6 ruppes";
break;
case 10:
cout<<"you won nothing";
break;
case 11:
cout<<"you need to pay 5 rupees";
break;
case 12:
cout<<"you won nothing";
break;
case 13:
cout<<"you won 100 rupees";
break;
case 14:
cout<<"you won a concert ticket";
break;
case 15:
cout<<"you won nothing";
break;
case 16:
cout<<"you won a mobile";
break;
}
}
