#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

/**
 * vector<int>ar(3);
 * for(auto&e:ar){
 *     scanf("%d",&e);
 * }
 * sort(ar.begin(),ar.end())
 * int sum=accumulate(ar.begin(),ar.end(),0);
 ***/

int main(){
    double pai=3.141592653589;
    int n,m,t;
    scanf("%d %d",&n,&m);
    int a[n][m], b[m], ans[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
       }
    }
    for(int i=0;i<m;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        t=0;
        for(int j=0;j<m;j++){
            t+=(a[i][j]*b[j]);
        }
        ans[i]=t;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",ans[i]);
    }
    return 0;
}