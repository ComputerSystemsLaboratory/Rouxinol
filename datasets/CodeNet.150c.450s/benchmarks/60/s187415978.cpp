#include<bits/stdc++.h>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;


int main(){
    int n;
    scanf("%d",&n);
    int C[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            C[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        int u,k;
        scanf("%d %d",&u,&k);
        vector<int> v(k);
        for(auto&e:v){
            scanf("%d",&e);
        }
        for(int i=0;i<k;i++){
            C[u-1][v[i]-1]=1;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<n-1) printf("%d ",C[i][j]);
            else printf("%d\n",C[i][j]);
        }
    }

    return 0;
}