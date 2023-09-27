//tt89 ;)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
void testcase(int t) { cout<<"Case #"<<t<<": "; }
void online() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif //ONLINE_JUDGE
}
const int mod= 1e9+7;

int main() {
    fastIO;
    int n; cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int q; cin>>q;
    unordered_map<int,int> m;
    ll sum=0;
    for(auto i:arr) { sum+=i; m[i]++; }

    while(q--) {
        int a,b; cin>>a>>b;
        m[b]+=m[a];
        sum+= m[a]*(b-a);
        m.erase(a);

        cout<<sum<<endl;
    }

    return 0;
}