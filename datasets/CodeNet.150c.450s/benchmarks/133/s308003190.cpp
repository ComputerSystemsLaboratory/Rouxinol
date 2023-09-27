#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/tag_and_trait.hpp>

using namespace std;
using ll = long long;


vector<int> c;
vector<vector<int>> s;
int D;

ll calc(vector<int> v){
    ll ans = 0;
    vector<int> last(26, 0);
    for(int i = 0;i < D;i++){
        last[v[i] - 1] = i + 1;
        ans += s[i][v[i] - 1];
        //cout<<s[i][v[i] - 1]<<endl;
        for(int j = 0;j < 26;j++){
            ans -= (ll)(i + 1 - last[j]) * c[j];
        }
        cout<<ans<<endl;
    }
    return ans;
}

int main(){
    cin >> D;
    for(int i = 0;i < 26;i++){
        int a;cin >> a;
        c.push_back(a);
    }
    for(int i = 0;i < D;i++){
        vector<int> a;
        for(int j = 0;j < 26;j++){
            int b;cin >> b;
            a.push_back(b);
        }
        s.push_back(a);
    }
    vector<int> v;
    for(int i = 0;i < D;i++){
        int a;cin >> a;
        v.push_back(a);
    }
    calc(v);
}