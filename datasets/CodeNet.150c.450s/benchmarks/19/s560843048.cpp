#include<stdio.h>
int main(){

int a,b;

while(scanf("%d%d",&a,&b),a||b){

printf("%d %d\n",(b>a)?a:b,(b>a)?b:a);

}

return 0;
}

