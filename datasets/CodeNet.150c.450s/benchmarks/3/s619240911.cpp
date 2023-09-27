#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    string str;
    string x,y;
    int a;
    int b,c;
    cin >> str;
    cin >> a;
    for (int i=0; i<a; i++) {
        cin >> x >> b >> c;
        if(x=="replace"){
            cin >> y;
            str.replace(b,c-b+1,y);
        }
        if(x=="reverse"){
            reverse( str.begin() + b, str.begin() + c + 1);
        }
        if(x=="print"){
            cout <<str.substr(b,c-b+1) <<endl;
        }
    }
}

