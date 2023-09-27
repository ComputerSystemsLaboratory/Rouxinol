#include <iostream>
using namespace std;
int main(void){
    int a,b,c,ans;
    ans = 0;
    scanf("%d%d%d",&a,&b,&c);
    for(int t=a;t<=b;t++){
        if(c%t==0){
            ans += 1;
        }
        else{
        }
        
        
    }
    printf("%d\n",ans);
    return 0;
}