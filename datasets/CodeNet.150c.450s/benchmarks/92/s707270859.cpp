#include <iostream>
#define REP(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
    int a,b,c;
    REP(j,200){
    cin >> a >> b;
    if(!cin)
        return 0;
    c = a+b;
    REP(i,10){
        c/=10;
        if(c==0){
            cout << i+1 << "\n";
            break;
        }
    }
    }
}