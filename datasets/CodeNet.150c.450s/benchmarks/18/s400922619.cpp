#include<stdio.h>
#include<math.h>
 
int main(){
    int a;
    scanf("%d",&a);
    int b=100000;
    for(int i=0;i<a;i++){
        b*=1.05;
        if(b%1000!=0)b=(b/1000+1)*1000;
    }
    printf("%d\n",b);
}
