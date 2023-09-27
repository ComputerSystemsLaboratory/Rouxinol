#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top,s[1000];
void puch(int x)
{
s[++top]=x;
}
int  pop()
{
top--;
return s[top+1];
}
int main()
{
    int a,b;
    top=0;
    char c[100];
    while(scanf("%s",c)!=EOF)
    {
        if(c[0]=='+'){
            a=pop();
            b=pop();
            puch(a+b);
        }else if(c[0]=='-'){
            a=pop();
            b=pop();
            puch(b-a);

        }else if(c[0]=='*'){
            a=pop();
            b=pop();
            puch(a*b);
        }else{
        puch(atoi(c));
        }
    }
    printf("%d\n",pop());
    return 0;

}