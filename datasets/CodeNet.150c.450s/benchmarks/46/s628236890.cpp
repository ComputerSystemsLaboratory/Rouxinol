#include<stdio.h>
using namespace std;

int main(){
    int n,x;
    scanf("%d %d", &n,&x);
    while(n!=0 || x!=0){
        int sum=0;
        for(int i=1; i<=n; i++){
            for(int j=i+1;j<=n; j++){
                for(int k=j+1; k<=n; k++){
                    if(i+j+k==x) sum++;
                }
            }
        }
        printf("%d\n", sum);
        scanf("%d %d", &n,&x);
    }
    return 0;
}

