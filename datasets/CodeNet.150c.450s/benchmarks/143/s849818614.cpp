#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>
#include <string>
#include <cmath>  //sqrt 
#include <iomanip> //setprecision
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
#define beg begin()
#define end end()


void _main(){
    int n; cin >> n;
    vector<int> backet(pow(10,5)+1,0);
    ll sum =0;
    rep(i,n){
        int a; cin >> a;
        sum += a;
        backet[a]++;
    }
    
    int q; cin >> q;
    rep(i,q){
        int b,c; cin >> b >> c;
        backet[c]+=backet[b];
        sum = sum + (c-b)*backet[b];
        backet[b]= 0;

        cout << sum << endl;
    }
    return;
}
int main() {
    cout << fixed << setprecision(10);
    _main();
    return 0;
}
    