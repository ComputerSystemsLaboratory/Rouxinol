#include<cstdio>
using namespace std;
int main(){
    int n,x;
    int i=1;
    scanf("%d",&n);
    while(1){
        x=i;
        if(x%3==0){
            printf(" %d",i);
        }else{
            while(x){
            if(x%10==3){
                printf(" %d",i);
                break;
            }
            x/=10;
            
        }
        }
if(++i>n){
                break;
            }
        
    }
    printf("\n");
    return 0;
}

