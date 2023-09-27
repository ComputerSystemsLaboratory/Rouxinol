#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll i,j;
    ll n,m;
    cin >> n;
    double m1 = n;
    m = sqrt(m1) + 1;
    cout << n << ": ";
    ll tmp = 2;
    vector<ll> ans;
    while(n != 1){
        if(n%tmp == 0){
            n /= tmp;
            ans.push_back(tmp);
            m1 = n;
            m = sqrt(m1) + 1;
        }else{
            if(tmp >= m){
                ans.push_back(n);
                break;
            }
            ++tmp;
        }
    }
    for(i = 0;i < ans.size()-1;++i){
        cout << ans.at(i) << " ";
    }
    cout << ans.at(i) << endl;
    return 0;
}
