#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair <int, int> P;
const int MAX_N=1000100;
int bit[MAX_N], n_, n;

int sum(int i){
    int s=0;
    while(i>0){
        s+=bit[i];
        i -=i & -i;
    }
    return s;
}

void add(int i, int x){
    while( i<=n){
        bit[i] +=x;
        i += i & -i;
    }
}

int a[MAX_N], b[MAX_N];
P c[MAX_N];
int main(){
    ll ans=0;

    cin >> n;
//    n_=1;
//    while(n_ < n) n_ *=2;

    for(int j=0; j<n; j++){ cin >> b[j]; c[j]=P(b[j],j);}
    sort(c,c+n);
    for(int j=0; j<n; j++){
        c[j].first=j+1;
        swap (c[j].first, c[j].second);
    }
    sort(c,c+n);
    for(int j=0; j<n; j++){
        a[j]=c[j].second;
    }
    for(int j=0; j<n; j++){
        ans += j-sum(a[j]);
        add(a[j],1);
    }
    cout << ans << endl;
}
