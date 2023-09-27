#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main() {
    string str;
    string copy[201];
    int m;
    int h;
    
    while(cin >> str) {
        if (str == "-") break;
        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> h;
        string cat = str.substr(0,h);
        str.erase(0,h);
        str+=cat;
        }
        cout << str << endl;
    }
}
