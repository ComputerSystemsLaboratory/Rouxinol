#include<iostream>
using namespace std;

int Caluculater(int a, int b, char op);

int main(){
    int a,b;
    int result[10000],i=0,j=0;
    char op;
    
    while(1){
    cin >> a >> op >> b;
    if(op == '?') break;
    result[i] = Caluculater(a,b,op);
    i++;
    j++;
    }
    for(i = 0; i < j; i++){
        cout << result[i] << endl;
    }
    return 0;
}

int Caluculater(int a, int b, char op){
    if(op == '+') return a + b;
    else if(op == '-') return a - b;
    else if(op == '*') return a * b;
    else if(op == '/') return a / b;
}
