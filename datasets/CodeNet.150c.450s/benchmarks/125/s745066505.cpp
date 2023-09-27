#include <algorithm>
#include <iostream>
using namespace std;

int t=0,k,n;
int gone[100+10]={},a[100+10][100+10]={},d[200+10],f[200+10];

void dfs(int cur){
    if(gone[cur]!=1){
        t+=1;
        d[cur]=t;
        gone[cur]=1;
    }
    for(int m=1;m<=n;m++){
        if(a[cur][m]==1){
            if(gone[m]==0){
                dfs(m);
            }
        }
    }
    t+=1;
    f[cur]=t;
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        int u,p;
        cin >> u >> k;
        for(int j=0;j<k;j++){
            cin >> p;
            a[i][p]=1;
        }
    }
    for(int q=1;q<=n;q++){
        if(gone[q]!=1) dfs(q);
    }
    for(int r=1;r<=n;r++){
        cout << r << " " << d[r] << " " << f[r] << endl;
    }
}