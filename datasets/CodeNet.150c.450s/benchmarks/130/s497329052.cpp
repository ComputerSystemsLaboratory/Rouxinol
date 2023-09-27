#include<cstdio>
using namespace std;
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int A[n][m],b[m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&A[i][j]);
        }
    }
    
    for(int i=0;i<m;i++){
        scanf(" %d",&b[i]);
    }
    int ans[n];

    for(int i=0;i<n;i++){
        ans[i]=0;
        for(int j=0;j<m;j++){
            int tmp;
            tmp=A[i][j]*b[j];
            ans[i]+=tmp;
        }
        printf("%d\n",ans[i]);
    }

}
