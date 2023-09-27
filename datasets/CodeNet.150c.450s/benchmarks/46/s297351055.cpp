#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,exe=0;
    int i,j,m;

    while(1){

    scanf("%d %d",&n,&x);

    if(n==0&&x==0)
        break;

    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            for(m=j+1;m<=n;m++){

                if(i<j&&j<m){
                    if(i+j+m==x){
                        exe++;
                    }

                }
            }
        }
    }

    printf("%d\n",exe);
    exe=0;
    }

    return 0;
}

