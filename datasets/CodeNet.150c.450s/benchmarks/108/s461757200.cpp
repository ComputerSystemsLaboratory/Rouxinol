#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<(n);i++)
#define REAP(i,a,n) for(int i=(a);i<(n);i++)
#define YES cout<<"Yes"<<endl
#define NO cout<<"No"<<endl
#define fr first
#define sc second
#define pb push_back
#define All(v) v.begin(),v.end()
typedef long long ll;

int table[101][101];

void init(){
    REP(i,101){
        REP(j,101){
            table[i][j]=1e9;
            if(i==j)table[i][j]=0;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    init();
    int u,k,v;
    REP(i,n){
        cin >> u >> k;
        REP(j,k){
            cin >> v;
            table[u-1][v-1]=1;
        }
    }

    REP(k,n){
        REP(i,n){
            REP(j,n){
                table[i][j]=min(table[i][j],table[i][k]+table[k][j]);
            }
        }
    }
    REP(i,n){
        cout << i+1 << " " << ((table[0][i]<n)?table[0][i]:-1);
        cout << endl;
    }
}

