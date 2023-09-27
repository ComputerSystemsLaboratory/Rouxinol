#include <iostream>
using namespace std;

#define REP(i,n) for (int (i) = 0; (i) <= (n); ++(i))
int main() {
    int n;
    int ret = 0;
    while(cin>>n){
        ret =0 ;
        REP(a, 9)REP(b, 9)REP(c, 9)REP(d, 9)if(a+b+c+d == n)ret++;
        cout<<ret<<endl;
    }
    return 0;
}