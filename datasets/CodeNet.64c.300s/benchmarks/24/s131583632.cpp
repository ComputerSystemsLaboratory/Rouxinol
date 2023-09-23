#include<bits/stdc++.h>
using namespace std;


int main(){
    int N;
    while(scanf("%d",&N),N){
        int A=0,B=0;
        while(N--){
            int a,b;
            scanf("%d%d",&a,&b);
            if(a>b)A+=a+b;
            else if(a<b)B+=a+b;
            else{
                A+=a;
                B+=b;
            }
        }

        printf("%d %d\n",A,B);
    }
    return 0;
}