#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
    string c, left, right;
    int a,b;
    while(cin >> c){
        if(c == "-") break;
        cin >> a;
        for (int i = 0; i < a; ++i)
        {
            cin >> b;
            c += c.substr(0, b);
            c.erase(0,b);
        }
        cout << c << endl;
    }
    return 0;
}