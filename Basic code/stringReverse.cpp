#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "hello";
    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];
    }
    cout << "Reversed string: " << reversedStr << endl;
    return 0;
}
