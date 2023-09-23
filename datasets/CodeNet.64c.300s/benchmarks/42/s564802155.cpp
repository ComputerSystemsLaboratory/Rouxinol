#include <stdio.h>
int main(){
    while(1){
        int n,m,a[21][21],px=10,py=10;
        scanf("%d",&n);
        if(n==0) return 0;
        for(int i=0;i<21;i++) for(int j=0;j<21;j++) a[i][j]=0;
        for(int i=0;i<n;i++){
            int x,y;
            scanf("%d %d",&x,&y);
            a[x][y]=1;
        }
        scanf("%d",&m);
        for(int i=0;i<m;i++){
            char d;
            int l;
            scanf(" %c %d",&d,&l);
            for(int j=0;j<l;j++){
                if(d=='N') py++;
                if(d=='E') px++;
                if(d=='S') py--;
                if(d=='W') px--;
                if(a[px][py]) n--;
                a[px][py]=0;
            }
        }
        if(n==0) printf("Yes\n");
        else printf("No\n");
    }
}