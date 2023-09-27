#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=n;i>=0;i--)
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define ALL(v) v.begin(), v.end()
#define RALL(v) v.rbegin(), v.rend()
using namespace std;
typedef long long ll;



int main(void){
    int n;
    cin >> n;
    vector<int> v(100000+1);
    ll sum=0;
    REP(i,n){
        int a;
        cin >> a;
        v[a]++;
        sum+=a;
    }
    
    int q;
    cin >> q;
    REP(i,q){
        int b,c;
        cin >> b >> c;
        sum+=((c-b)*v[b]);
        v[c]+=v[b];
        v[b]=0;
        cout << sum << endl;
    }
    
    return 0;
}