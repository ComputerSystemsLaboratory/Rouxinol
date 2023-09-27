#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;
    string p;
    cin >> p;
    string s2;
    s2 = s + s;
    if (s2.find(p)!=-1){
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}
