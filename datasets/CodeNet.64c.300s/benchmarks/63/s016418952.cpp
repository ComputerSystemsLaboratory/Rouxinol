#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
    int a,b;
    int d,m;
    while (1){
        cin >> a;
        if (cin.eof())
            break;
        cin >> b;
        int l=max(a,b);
        int s=min(a,b);
        int n;
        while (1){
            n=l%s;
            if (n==0){
                d=s;
                break;
            }
            l=s;
            s=n;
        }
        m=a*(b/d);
        cout << d << " " << m << endl;
    }
    return 0;
}