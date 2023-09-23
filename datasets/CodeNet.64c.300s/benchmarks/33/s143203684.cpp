#include "cstdio"

int main(){
char op;
int a,b,ans;
while(1){
scanf("%d  %c %d",&a,&op,&b);
if(op == '?') break;
switch(op){
case '+':
ans = a+b;
break;

case '-':
ans = a-b;
break;

case '*':
ans = a*b;
break;

case '/':
ans = a/b;
break;
}
printf("%d\n",ans);
}
}