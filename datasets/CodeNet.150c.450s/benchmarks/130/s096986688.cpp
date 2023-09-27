#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
        int n,m;
        scanf("%d %d",&n,&m);
        int ar[n][m];
        int l[m];
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        scanf("%d",&ar[i][j]);
                }
        }
        for(int i=0;i<m;i++){
                scanf("%d",&l[i]);
        }
        for(int i=0;i<n;i++){
                int ans=0;
                for(int j=0;j<m;j++){
                        ans+=ar[i][j]*l[j];
                }
                printf("%d\n",ans);
        }
        return 0;
}