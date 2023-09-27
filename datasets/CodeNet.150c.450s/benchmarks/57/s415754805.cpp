#include<stdio.h>
int main(){
 
int a,b;
char op;
 
while(scanf("%d %c %d",&a,&op,&b),op!='?'){

if(op=='+')printf("%d\n",a+b);
else if(op=='-')printf("%d\n",a-b);
else if(op=='*')printf("%d\n",a*b);
else printf("%d\n",a/b);

}

return 0;
}
