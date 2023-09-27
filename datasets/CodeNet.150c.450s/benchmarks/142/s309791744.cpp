#include<bits/stdc++.h>
#include<string>
#include<cmath>

using namespace std;

#define ll long long int
#define ld long double
#define loop(i, n) for (int i = 0; i < n; i++)
#define loops(i, s, n) for (int i = s; i < n; i++)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()
#define sz(x) ((int)(x).size())
#define fi first
#define se second
#define deb(x) cout<< #x << '=' << x <<endl
#define MOD 1000000007

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    ll a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    ll prev = 0;
    for(int i = 0; i<k; i++){
        prev += a[i];
    }
    int i = 0;
    int j = k;
    while(j < n){
        ll nxt = (a[j] + prev) - a[i];
        if(nxt > prev){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        prev = nxt;
        i++;
        j++;
    } 
}