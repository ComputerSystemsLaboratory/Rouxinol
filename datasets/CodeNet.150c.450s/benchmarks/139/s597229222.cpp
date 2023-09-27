#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#define initdp(a, b)  for (int i = 0; i <= a; i++)   for (int j = 0; j <= b; j++) dp[i][j] = -1;
#define pb push_back
// #define mp make_pair
#define pii pair<int, int>
#define ll long long
#define pll pair<ll, ll>
#define all(arr) arr.begin(), arr.end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repd(i, n) for (int i = n - 1; i >= 0; i--)
#define fo(i, l, r) for (int i = l; i <= r; i++)
#define inf 1000000001
#define inf1 1000000000000000001
#define mod 1000000007
#define pie 3.14159265358979323846264338327950L
#define N 1000005
#define mid(l, r) l + (r - l) / 2
#define veci vector<int>
#define vecl vector<ll>
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define umapi unordered_map<ll, ll>
#define umapc unordered_map<char, int>
#define endl "\n"
#define pui pair<int, pair<int,int> >
using namespace std;

vector<int> ans(N+1,N);
unordered_map<int,veci> mp;
int n,m;

void bfs() {

    queue<int> q;
    q.push(1);
    while(!q.empty()) {
        int size = q.size();
        while(size--) {
            int temp = q.front();
            q.pop();

            for(auto it : mp[temp]) {
                if(ans[it] == N) {
                    ans[it] = temp;
                    q.push(it);
                }
            }

        }
    }
}

void solve(){
    
    
    cin>>n>>m;

    
    rep(i,m) {
        int a , b;
        cin>>a >>b;

        mp[a].pb(b);
        mp[b].pb(a);
    }

    bfs();
    
    // rep(i,n+1) {
    //     cout<<ans[i]<<" ";
    // }

    bool check = true;
    for(int i=2; i<=n; i++) {
        if(ans[i] == N) {
            check = false;
            break;
        }
    }

    if(check == false) {
        cout<<"No";
    } else {
        cout<<"Yes"<<endl;
        for(int i=2; i<=n; i++) {
            cout<<ans[i]<<endl;
        }
    }



}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout<<fixed<<setprecision(20);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}

