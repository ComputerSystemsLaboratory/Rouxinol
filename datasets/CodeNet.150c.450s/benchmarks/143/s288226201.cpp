#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,q;

int main(){
    cin >> n;
    ll a[100001]; memset(a,0LL,sizeof(a));
    ll num; for(int i=0; i<n; i++){
        cin >> num; a[num]++;
    }
    ll sum = 0LL; for(int i=1; i<100001; i++){
        sum+=i*a[i];
    }
    cin >> q;
    ll b,c;
    while(q--){
        cin >> b >> c;
        sum+=(c-b)*a[b];
        a[c]+=a[b]; a[b]=0LL;
        cout << sum << endl;
    }
}
