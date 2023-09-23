#include <iostream>

using namespace std;

int main(void){
    int a, b, c;
    cin >> a >> b >> c; cin.ignore();
    if (a < b && b < c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}