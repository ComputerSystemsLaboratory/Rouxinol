#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<tuple>
#include<map>
#include<queue>
#include<stack>
#include<deque>
#include<bitset>
#include<math.h>
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
    int n;
    cin >> n;
    vector<ll> x(100001,0);
    for(int i=0;i<n;i++){
        ll a;
        cin >> a;
        x.at(a)++;
    }

    ll sum=0;
    for(int i=1;i<x.size();i++){
        sum+=(i*x.at(i));
    }

    int q;
    cin >> q;
    vector<ll> ans;

    for(int i=0;i<q;i++){
        ll b,c;
        cin >> b >> c;
        x.at(c)+=x.at(b);
        sum+=(c-b)*x.at(b);
        x.at(b)=0;
        ans.push_back(sum);
    }

    for(int i=0;i<ans.size();i++) cout << ans.at(i) << endl;
}