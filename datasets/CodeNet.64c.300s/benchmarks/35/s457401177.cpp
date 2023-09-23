
#include<bits/stdc++.h>

using namespace std;

const int maxn=1e2+5;

int s[maxn][maxn];

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x,cnt;
        scanf("%d%d",&x,&cnt);
        for(int j=0;j<cnt;j++){
            int y;
            scanf("%d",&y);
            s[x][y]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j!=1){
                printf(" ");
            }
            printf("%d",s[i][j]);
        }
        printf("\n");
    }
    return 0;
}

