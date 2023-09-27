#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
    int S;
    cin >> S; 
    cout << S/3600;
    cout << ":";
    S %= 3600;
    cout << S/60;
    cout << ":";
    S %= 60;
    cout << S%60;
    cout << endl;
}

