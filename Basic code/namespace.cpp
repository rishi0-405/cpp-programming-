#include <iostream>
#include <stdlib.h>
using namespace std;
namespace first{
    int x =1;
}
namespace second{
    int x = 2;
}
namespace first{
    int y=3;
}
namespace second{
    int y = 4;
}
int main (){
    system("cls");
    // multiple names or value can be assigned to a single variable or value using namespace
int x = 0;
int y =1;
cout<< first::x << '\n';
cout<< second::x << '\n';
cout<< x << '\n';
cout << y;
    return 0;
}
