#include <bits/stdc++.h>
#define ll long long
#define ar array
#define nl '\n'
#define AC ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
const int M = 1e9+7;
const int N = 2*1e5;

int occur[N];

int main(){
    AC
    int n;
    ll sum = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        sum+=x;
        occur[x]++;
    }

    int q;
    cin>>q;
    for(int i=0; i<q; i++){
        int a, b;
        cin>>a>>b;
        int diff = b-a;
        sum+=(ll)diff*occur[a];
        occur[b]+=occur[a];
        occur[a] = 0;
        cout<<sum<<nl;
    }
}