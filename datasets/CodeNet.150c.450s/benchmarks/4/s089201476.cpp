#include <iostream>

using namespace std;

void print_grade(int m, int f, int r) {
    int sum = m + f;

    if (m == -1 || f == -1) {
        cout << "F";
    } else if (sum >= 80) {
        cout << "A";
    } else if (sum >= 65) {
        cout << "B";
    } else if (sum >= 50) {
        cout << "C";
    } else if (sum >= 30) {
        if (r >= 50) {
            cout << "C";
        } else {
            cout << "D";
        }
    } else {
        cout << "F";
    }
    cout << endl;
}

int main() {
    int m,f,r;
    while(true) {
        cin >> m >> f >> r;

        if (m == -1 && f == -1 && r == -1)
            break;

        print_grade(m,f,r);
    }
    return 0;
}