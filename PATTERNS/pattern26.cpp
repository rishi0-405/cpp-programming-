#include <iostream>
using namespace std;
int main() {
    int n = 5;
   
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << "  ";
        }
        
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        
        int spaces = 2 * (n - i);
        for (int j = 1; j <= spaces; j++) {
            cout << "  ";
        }
        
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}





// 1        1
// 1 2    2 1
// 1 2 3 3 2 1
// 1 2    2 1
// 1        1

