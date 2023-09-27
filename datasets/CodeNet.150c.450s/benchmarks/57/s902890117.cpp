#include <iostream>
using namespace std;
int main(){
    int a,c;
    char b;
    while (cin >> a >> b >> c){
        switch (b){
            case '?' : goto last;
            case '+' : cout << a+c << endl; break;
            case '-' : cout << a-c << endl; break;
            case '*' : cout << a*c << endl; break;
            case '/' : cout << a/c << endl; break;
        }
    }
    last:
    return 0;
}