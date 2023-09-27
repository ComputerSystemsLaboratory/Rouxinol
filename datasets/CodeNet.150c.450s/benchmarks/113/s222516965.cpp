#include<cstdio>
int main(void){

    int count=0;
    while(true){
        int a=0;
        scanf("%d",&a);
        if(a==0){
            break;
        }
        count++;
        printf("Case %d: %d\n",count,a);
        
    }
    return 0;
}
