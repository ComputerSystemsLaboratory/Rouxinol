#include <stdio.h>
using namespace std;
int main(void){
    // Your code here!
    int a,b,c,x;
    int ans = 0;
    scanf("%d %d %d",&a,&b,&c);
    for(int x=a;x<=b;x++){
        if(c % x == 0)
        {
            ans++;
        }
        //c%x=0
    }
    printf("%d\n",ans);
}

