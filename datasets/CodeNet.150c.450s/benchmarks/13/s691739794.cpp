#include <iostream>
#include <string.h>
using namespace std;
int main(void){

    string s, p;
    cin >> s >> p;
    s += s;

    string::size_type result = s.find(p);

    if (result != string::npos) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}