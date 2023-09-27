#include <iostream>

using namespace std;

int main() {

    int num;
    cin >> num;

    int* a = new int[num];

    for (int i = 0; i < num; i++) {
        cin >> a[i];
    }
    for (int i = num - 1; i >= 0; i--) {
        cout << a[i];
        if (i == 0)
            break;
        cout << " ";
    }
    cout << endl;
}