#include<iostream>
#include <string>
using namespace std;

int main () {
    string s, p;
    
    cin >> s >> p;
    s += s;
    if(s.find(p,0) != string::npos)
        cout << "Yes";
    else
        cout << "No";
    cout << endl;
}