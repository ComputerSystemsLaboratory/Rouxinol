#include<cstdio>
int main(){
    int a[4],b[4];
    while(~scanf("%d",&a[0])){
        bool e[10];
        for(int i=0;i<10;i++){
            e[i]=false;
        }
        int hi=0,bl=0;
        e[a[0]]=true;
        for(int i=1;i<4;i++){
            scanf("%d",&a[i]);
            e[a[i]]=true;
        }
        for(int i=0;i<4;i++){
            scanf("%d",&b[i]);
            if(a[i]==b[i]) hi++;
            else if(e[b[i]]) bl++;
        }
        printf("%d %d\n",hi,bl);
    }
}