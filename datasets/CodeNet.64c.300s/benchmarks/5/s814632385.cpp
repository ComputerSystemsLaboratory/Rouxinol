#include <iostream>
using namespace std;
int main(){
    int a,b,c,i,x;
    a =0;
    b =0;
    c =0;
    for (int n=0;n<10;n++){
        cin >> i;
        if (c < i)
            c = i;
        if (b < c){
            x = b;
            b = c;
            c = x;
        }
        if (a < b){
            x = a;
            a = b;
            b = x;
        }

    }
    cout << a << endl << b << endl << c << endl;
}