#include <stdio.h>

int main(){
    int n,s[14],h[14],c[14],d[14];
    int x;
    int i;
    char m;
    scanf("%d",&n);
    getchar();
    for(i=1;i<=13;i++)s[i] = h[i] = c[i] = d[i] = 1;
    for(i=0;i<n;i++){
        scanf("%c",&m);
        scanf("%d",&x);
        getchar();
        switch(m){
            case 'S':s[x] = 0;
                break;
            case 'H':h[x] = 0;
                break;
            case 'C':c[x] = 0;
                break;
            case 'D':d[x] = 0;
                break;
        }
    }
    for(i=1;i<=13;i++)if(s[i])printf("S %d\n",i);
    for(i=1;i<=13;i++)if(h[i])printf("H %d\n",i);
    for(i=1;i<=13;i++)if(c[i])printf("C %d\n",i);
    for(i=1;i<=13;i++)if(d[i])printf("D %d\n",i);    
}