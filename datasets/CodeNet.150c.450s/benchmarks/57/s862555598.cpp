#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int a, b;
    char ch;
    
    while(true){
        cin >> a >> ch >> b;
        if(ch == '?') break;
        
        if(ch == '+') a += b;
        else if(ch == '-') a -= b;
        else if(ch == '*') a*= b;
        else a /= b;
        
        cout << a << endl;
    }
    
    return 0;
}