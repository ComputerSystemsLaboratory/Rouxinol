#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(x) x.begin(),x.end()
typedef long long ll;
ll mod = 1000000007;
ll inf = 1e18;
int main(){

    ll n, m;
    cin >> n >> m;
    vector<vector<int>> r(n);
    vector<int> s(n);
    int a,b;
    rep(i,m){
        cin >>  a >> b;
        a--; b--;
        r[a].push_back(b);
        r[b].push_back(a);
    } 
    queue<int> que;
    que.push(0);
    int t;

    while(!que.empty()){
        t=que.front();
        que.pop();
        rep(i,r[t].size()){
            if(s[r[t][i]]==0){
                if(r[t][i]==0) continue;
                s[r[t][i]]=t+1;
                que.push(r[t][i]);
            }
        }
    }

    cout << "Yes" << endl;
    rep2(i,1,n) cout << s[i] << endl;
    
    //else cout << "No" << endl;
    //if(ans) cout << "YES" << endl;
    //else cout << "NO" << endl;
return 0;
}