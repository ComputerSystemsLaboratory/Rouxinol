#include<bits/stdc++.h>

typedef long long ll;
typedef long double ld;

#define n1		      "\n"
#define B                     begin()
#define E                     end()
#define F                     first
#define S                     second
#define pb                    push_back
#define pf                    push_front
#define popb                  pop_back()
#define popf                  pop_front()

const int BIG=1e5+55;
const int BIGG=1e9+7;
const ll BIGGE=1e12+55;
const double SML=(1e-7);

using namespace std;

    ll n,q,a[BIG];
    ll sum;
    map <int,int> mp;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    cout.tie(NULL);
    cin >>n;
    for (int i=0; i<n; i++) {
        cin >>a[i];
        sum += a[i];
        mp[a[i]]++;
    }
    cin >>q;
    while (q--) {
        int x,y;
        cin >>x >>y;
        mp[y] += mp[x];
        sum += mp[x]*(y-x);
        mp[x] = 0;
        cout <<sum <<n1;
    }



    return 0;
}
