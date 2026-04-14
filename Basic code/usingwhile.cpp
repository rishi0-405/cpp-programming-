#include <iostream>
#include <string> 
using namespace std;
int main() {
    string name;
    string pass;
    cout << "Enter your name: ";
    getline(cin, name); 
    while(name.empty()){
        cout << "Name cannot be empty! Enter your name: ";
        getline(cin, name);
    }
    cout << "Enter your password: ";
    getline(cin, pass);
    while(pass.empty()){
        cout << "Password cannot be empty! Enter your password: ";
        getline(cin, pass);
    }
    cout << "\nWelcome, " << name << "!" << endl;
    return 0;
}
