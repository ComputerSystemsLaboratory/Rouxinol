#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define inf 1e9+7

int f[200],d[200];
bool table[200][200];
int cou;

void init(){
    for(int i=0;i<200;i++){
        f[i]=d[i]=-1;
    }
}

void dfs(int n,int itr){
    cou++;
    if(d[itr]<0)d[itr]=cou;
    for(int i=0;i<n;i++){
        if(d[i]<0&&table[itr][i]) dfs(n,i);
    }
    cou++;
    f[itr] = cou;
}

void solve(int n){
    for(int i=0;i<n;i++){
        if(d[i]<0)dfs(n,i);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);


    init();
    int u,k,v;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> u >> k;
        for(int j=0;j<k;j++){
            cin >> v;
            table[u-1][v-1]=true;
        }
    }

    solve(n);

    for(int i=0;i<n;i++){
        cout << i+1 << " " << d[i] << " " << f[i] << endl;
    }

    return 0;
}

