#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n; cin >> n;
    printf("%lld:",n);

    for (ll i = 2; i < 100100; i++) {
        if(n%i == 0){
            printf(" %lld", i);
            n/=i;
            i=1;
        }
        if(i==100099&&n!=1) cout<<" "<<n;
    }
 
    cout<<endl;

    return 0;
}
