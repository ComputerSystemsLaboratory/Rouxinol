#include <iostream>
using namespace std;
int main(){
int n,a,b,c,d,e,f,g,x;
cin >> n;

for (x = 3;x <= n;x++){
    
    a = x % 1000;
    b = x - a;
    b = b /1000;
    c = a % 100;
    d = a - c;
    d = d / 100;
    e = c % 10;
    f = c - e;
    f = f / 10;
    g = x % 3;

    if (b == 3 || d == 3 || e == 3 || f == 3 || g == 0){
        cout << " " << x;
    }

}
    cout << endl;

    return 0;
} 