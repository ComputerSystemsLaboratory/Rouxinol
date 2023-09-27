#include <iostream>
#include <stdio.h>
using namespace std;
int main(void){
    int n,x,cnt;
    int i,j,k;
    
    scanf("%d",&n); scanf("%d",&x);
    
    while(n!=0||x!=0){
        cnt=0;
         for(i=1;i<=n;i++){
            for(j=i+1;j<=n;j++){
                for(k=j+1;k<=n;k++){
                    if(i+j+k==x) cnt++;
                }
            }
        }
        scanf("%d",&n); scanf("%d",&x);
        printf("%d\n",cnt);
    }
    return 0;
}
