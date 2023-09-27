#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <stdio.h>
using namespace std;
int main() {
    string s;
    int times, h;
    while(cin >> s){
        if(s == "-") break;
        cin >> times;
        for(int i = 0; i < times; i++){
            cin >> h;
            string right = s.substr(h);
            string left = s.substr(0, h);
            s = right + left;
        }
        cout << s << endl;
    }
    
    return 0;
}