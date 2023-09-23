#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    int a,b;
    cin >> a;
    cin >> b;
    cout << "a";
    cout << " ";
    if (a<b){
        cout << "<";
    }
    else if (a>b){
        cout << ">";
    }
    else{
        cout << "==";
    }
    cout << " ";
    cout << "b";
    cout << endl;
}
