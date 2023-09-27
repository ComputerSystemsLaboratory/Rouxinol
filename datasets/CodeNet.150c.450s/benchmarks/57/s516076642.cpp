#include<iostream>
using namespace std;
int main(){
    int a,b,x;
    char op;
    cin >> a >> op >> b;
    while(op!='?'){
        if ( op == '+' ){x=a+b;}
        else if ( op == '-' ){x=a-b;} 
        else if ( op == '*' ){x=a*b;}
        else if ( op == '/' ){x=a/b;}
        cout << x << endl;
        cin >> a >> op >> b;
    }return 0;
}
