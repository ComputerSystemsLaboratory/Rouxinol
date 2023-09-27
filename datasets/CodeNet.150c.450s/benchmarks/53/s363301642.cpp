#include<bits/stdc++.h>
#define rep(i,n) for(int i = 0;i<n;i++)
using namespace std;

typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0;}

int main() {
    int n;
    cin >> n;
    int init_n = n;
    vector<pair<int,int>>prime;
    for(int i = 2; i*i<=init_n;i++) {
        int tmp = 0;
        while(n%i == 0) {
            tmp++;
            n /= i;
        }
        prime.push_back(make_pair(i,tmp));
    }
    if(n != 1) prime.push_back(make_pair(n,1));
    
    cout << init_n << ":";
    rep(i,prime.size()) {
        if(prime[i].second == 0) continue;
        int cnt = prime[i].second;
        cout << " ";
        while(cnt) {
            cout << prime[i].first;
            if(cnt != 1)cout << " ";
            cnt--;
        }
    }
    cout << endl;
}
