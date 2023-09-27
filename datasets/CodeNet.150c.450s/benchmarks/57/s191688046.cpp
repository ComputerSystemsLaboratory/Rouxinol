#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a,c;
    char b;
    while(1){
        cin >> a >> b >> c;
        if(b=='?') break;
        if(b=='+') cout << a+c;
        else if(b=='-')cout << a-c;
        else if(b=='*')cout << a*c;
        else cout << a/c;
        cout << endl;
    }
}
