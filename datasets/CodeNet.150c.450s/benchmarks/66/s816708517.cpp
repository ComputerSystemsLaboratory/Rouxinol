#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)

#define vi vector<int>
#define pb push_back

typedef long long ll;
using namespace std;



int main(){
    int n,m;
    cin >> n;
    map<string,int> mp;
    rep(i,n){
        string tmp;
        cin >> tmp;
        mp[tmp] = 1;
    }
    cin >> m;
    int cnt = 1;
    rep(i,m){
        string tmp;
        cin >> tmp;
        if(mp[tmp] == 0) {
            cout << "Unknown " << tmp << endl;
        }else{
            cnt++;
            if(cnt % 2 == 0) {
                cout << "Opened by " << tmp << endl;
            }else{
                cout << "Closed by " << tmp << endl;
            }
        }
    }
    return 0;
}

