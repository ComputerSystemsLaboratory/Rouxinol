#include <iostream>
#include <string>
using namespace std;

int main(){
    int a[25565] = {0};
    int b[25565] = {0};
    string op[25565] = {""};
    int i = 0;
    do{
        cin >> a[i] >> op[i] >> b[i];
        i++;
    }while(op[i-1] != "?");
    i = 0;
    do{
        if(op[i] == "+"){
            cout << a[i] + b[i] << endl;
        }
        if(op[i] == "-"){
            cout << a[i] - b[i] << endl;
        }
        if(op[i] == "*"){
            cout << a[i] * b[i] << endl;
        }
        if(op[i] == "/"){
            cout << a[i] / b[i] << endl;
        }
        i++;
        }while(op[i-1] != "?");
}