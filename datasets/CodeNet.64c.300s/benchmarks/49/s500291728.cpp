#include <iostream>
using namespace std;

int func(int i){
    if(i<10)return 1;
    else return (1+func(i/10));
}

int main(){
    int a,b;
    while(cin >> a >> b){
        cout << func(a+b) << endl;
    }
    return 0;
}