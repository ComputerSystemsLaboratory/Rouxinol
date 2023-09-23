#include <iostream>

using namespace std;

int main(){
    long long a, b, r, g, l;
    while(cin >> a >> b){
        l = a*b;
        if(a < b) swap(a,b);
        do{
            r = a % b;
            a = b;
            b = r;
        }while(r);
        g = a; l /= g;
        cout << g <<' '<<l <<endl;
    }
    return 0;
}