#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    while(cin >> a >> b){
        d=a+b;
        c=1;
        while(d/10){
            c++;
            d=d/10;
        }
        cout << c << endl;
    }
    return 0;
}