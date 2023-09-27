#include <stdio.h>
using namespace std;
 
int main(){
    int a,b,c;
    int cnt=0;
    scanf("%d %d %d",&a,&b,&c);
    // for(int i=a;i<=b;i++){
    //     if(c%i==0){
    //         cnt++;
    //     }
    // }
    for(a;a<=b;a++){
        if(c%a==0){
            cnt++;
        }
    }
    printf("%d\n",cnt);
}
