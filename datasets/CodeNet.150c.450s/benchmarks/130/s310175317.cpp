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
        int a[n][m];
        int b[m];
        for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                        scanf("%d",&a[i][j]);
                }
        }
        for(int i=0;i<m;i++){
                scanf("%d",&b[i]);
        }
        for(int i=0;i<n;i++){
                int ans=0;
                for(int j=0;j<m;j++){
                        ans+=a[i][j]*b[j];
                }
                printf("%d\n",ans);
        }
        return 0;
}