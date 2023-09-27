#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i=0;i<(n);i++)
typedef long long ll;

int main() {
    int D; vector<int> c(26); 
    cin >> D;
    rep(i,26){cin >> c[i];}
    vector<vector<int>> s(D,vector<int>(26));
    rep(i,D){rep(j,26){cin>>s[i][j];}}

    vector<int> t(D);
    rep(i,D){cin >> t[i];}

    vector<int> zenkai(26,0);

    int score=0;
    rep(i,D){
        zenkai[t[i]-1]=i+1;
        score+=s[i][t[i]-1];
        rep(j,26){
            score-=c[j]*(i+1-zenkai[j]);
        }
        cout << score << endl;
    }

}