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
    int n,m,l;
    scanf("%d %d %d",&n,&m,&l);
    int a[n][m], b[m][l];
    long ans[n][l];
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            ans[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int k=0;k<m;k++){
                ans[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            if(j!=l-1){
               printf("%ld ",ans[i][j]);
            }else{
               printf("%ld\n",ans[i][j]);
            }
        }
    }
    return 0;
}