#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <complex>
using namespace std;

int main() {
    string str;
    int n;
    cin >> str >> n;
    for(int i = 0; i < n; i++){
        string com;
        cin >> com;
        if(com == "print"){
            int a, b;
            cin >> a >> b;
            cout << str.substr(a, b - a + 1) << endl;
            continue;
        }
        if(com == "reverse"){
            int a, b;
            cin >> a >> b;
            reverse(str.begin() + a, str.begin() + b +1);
            continue;
        }
        if(com == "replace"){
            int a, b;
            string r;
            cin >> a >> b >> r;
            str.replace(a, b - a + 1, r);
            continue;
        }

    }
}
