#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    int S,h,m,s;
    cin >> S;
    cout << S/3600;
    cout << ":";
    cout << (S%3600)/60;
    cout << ":";
    cout << (S%3600)%60;
    cout << endl;
    
}

