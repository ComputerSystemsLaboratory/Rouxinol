#include<cstring>
#include<cstdio>
int main(void){
int a,b;
char c[5];
for(;;){
scanf("%d %s %d",&a,c,&b);
if(c[0]=='+') printf("%d\n",a+b);
else if(c[0]=='-') printf("%d\n",a-b);
else if(c[0]=='*') printf("%d\n",a*b);
else if(c[0]=='/') printf("%d\n",a/b);
else if(c[0]=='?') break;
}
return 0;
}