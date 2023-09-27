#include<cstdio>
using namespace std;
int main(void){
    int sum1 = 0,sum2 = 0;
    int a;
    for(int i = 0;i < 4;i++){
        scanf("%d",&a);
        sum1 += a;
    }
    for(int i = 0;i < 4;i++){
        scanf("%d",&a);
        sum2 += a;
    }
    if(sum1 >= sum2) printf("%d\n",sum1);
    else printf("%d\n",sum2);
    return 0;
}