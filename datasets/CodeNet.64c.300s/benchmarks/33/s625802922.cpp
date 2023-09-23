#include<iostream>

using namespace std;

int main(void){

    int a, b, c;

    char x;

    while(true){

        cin >> a >> x >> b;

        if(x == '?')break;

        if(x == '+') c = a + b;
        
        if(x == '-') c = a - b;

        if(x == '*') c = a * b;

        if(x == '/') c = a / b;

        cout << c << endl;

    }

return 0;

}