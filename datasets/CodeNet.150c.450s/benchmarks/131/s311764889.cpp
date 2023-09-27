#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define len(v) (int)(v).size()
#define all(v) (v).begin(),(v).end()
#define pb push_back

using namespace std;

int num(vector<int>& vec)
{
    int res = 0;
    int d = 1;
    rep(i,len(vec)){
        res += vec[i]*d;
        d *= 10;
    }
    return res;
}

int main()
{
    while(1){
        int n,m;
        cin >> n >> m;
        if(n == 0 && m == 0){
            break;
        }
        int loop = 1;
        map<int,int> mp;
        mp[n] = 0;
        while(1){
            int id = 0;
            vector<int> vec;
            while(n){
                vec.pb(n%10);
                n /= 10;
                id++;
            }
            rep(i,m-id){
                vec.pb(0);
            }
            vector<int> a = vec, b = vec;
            sort(all(a)), sort(all(b),greater<int>());
            int res = num(a)-num(b);
            if(mp.find(res) == mp.end()){
                mp[res] = loop++;
                n = res;
            }else{
                cout << mp[res] << " " << res << " " << loop-mp[res] << "\n";
                break;
            }
        }
    }
}

