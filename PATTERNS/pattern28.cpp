#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int total = 2 * n - 1;
    for (int i = 0; i < total; i++) {
        int spaces = (i < n) ? i : total - 1 - i;

        if (spaces == 0) {
            for (int j = 0; j < total; j++)
                cout << "*";
        } else {
            for (int j = 0; j < spaces; j++)
                cout << " ";

            cout << "*";

            int inner = total - 2 * spaces - 2;

            if (inner > 0) {
                for (int j = 0; j < inner; j++)
                    cout << " ";
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}





// *********
//  *     *
//   *   *
//    * *
//     *
//    * *
//   *   *
//  *     *
// *********
