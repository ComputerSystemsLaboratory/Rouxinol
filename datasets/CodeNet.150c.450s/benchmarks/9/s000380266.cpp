#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string str;
    string cpy;
    int m, h;
    
    while(cin >> str) {
        if(str[0] == '-' && str.length() == 1)   break;
        cin >> m;
        
        for(int i = 0; i < m; ++i) {
            cin >> h;
            cpy = str.substr(0, h);
            str.erase(0, h);
            str.insert(str.length(), cpy);
        }
        
        cout << str << endl;
    }
    
    return 0;
}

