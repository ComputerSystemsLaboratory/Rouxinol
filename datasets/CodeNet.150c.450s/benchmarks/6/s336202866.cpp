#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    bool x = a < b && b < c ? true : false;
    if (x) cout << "Yes";
    else cout << "No";
    cout << endl;
    return 0;
}