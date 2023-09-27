#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    int n, k;
    cin >> n >> k;
    int w[100000];
    for(int i=0;i<n;i++) cin >> w[i];

    ll ok=20000000000LL, ng=0;
    while(ok-ng>1){
        ll m=(ok+ng)/2;
        ll w_tot = 0;
        int cars = 0;
        int i=0;
        while(true){
            if(w_tot+w[i]>m){
                w_tot=0;
                cars++;
                if(cars>=k) goto l_ng;
            }else{
                w_tot+=w[i];
                i++;
                if(i>=n) goto l_ok;
            }
        }
        l_ok: ok=m; continue;
        l_ng: ng=m; continue;
    }

    cout << ok << endl;

    return 0;
}
