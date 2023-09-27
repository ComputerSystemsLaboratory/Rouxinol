#include <stdio.h>
int main(){
    int n,i,p;
    char f[100][2];
    while(1){
        scanf("%d",&n);
        if (n==0) break;
        p=0;
        for (i=0;i<n;i++){
            getchar();
            scanf("%c%c",&f[i][0],&f[i][1]);
            if (i!=0){
                if ((f[i-1][0]!=f[i][0])&&(f[i-1][1]==f[i][1])){
                    p++;
                }
            }
        }
        printf("%d\n",p);
    }
    return 0;
}