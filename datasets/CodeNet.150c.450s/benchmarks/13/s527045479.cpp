#include<iostream>
#include<string>
using namespace std;
string s, p;
int main() {
    cin >> s >> p;
    s += s;
    cout << (s.find(p) != s.npos ? "Yes" : "No") << endl;
}
