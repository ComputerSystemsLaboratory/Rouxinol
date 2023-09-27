#include <iostream>
using namespace std;

int main() {
    const int ARRAY_LENGTH = 20;
    char a[ARRAY_LENGTH] = "";
    cin >> a;
    for (int i = ARRAY_LENGTH; i > 0; i--) {
        if (a[i-1] == 0) {
           continue;
        }
        cout << a[i-1];
    }
    cout << endl;

    return 0;
}