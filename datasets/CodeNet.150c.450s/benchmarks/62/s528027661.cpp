#include <stdio.h>
using namespace std;
int main(void){
    // Your code here!
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b&&b<=c){
        printf("%d %d %d\n",a,b,c);
    }else if(a<=b&&a<=c&&b>=c){
        printf("%d %d %d\n",a,c,b);
    }else if(b<=a&&a<=c){
        printf("%d %d %d\n",b,a,c);
    }else if(b<=a&&b<=c&&c<=a){
        printf("%d %d %d\n",b,c,a);
    }else if(c<=a&&a<=b){
        printf("%d %d %d\n",c,a,b);
    }else if(c<=a&&c<=b&&a>=b){
        printf("%d %d %d\n",c,b,a);
    }
}


