#include <iostream>
using namespace std;
int main(void){
    int a;
    int b;
    int cnt = 0;
    while(true){
        scanf("%d%d",&a,&b);
//        printf("%d\n",a[t]);
        if(a==0 &&b==0){
            break;
        }
        if (a>b){
            int tmp = a;
            a = b;
            b = tmp;
            }
        cnt += 1;
    printf("%d %d\n",a,b);
    }
    return 0;
    
    
}