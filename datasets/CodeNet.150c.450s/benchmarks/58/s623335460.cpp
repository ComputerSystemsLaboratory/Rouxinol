#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct
{
    int S[1000];
    int top;
    void inti()
    {
        memset(S,0,sizeof(S));
    }
    void push(int x)
{
    S[++top]=x;
}
int pop()
{
    top--;
    return S[top+1];
}
}mystack;
int main()
{
    mystack.inti();
    int a,b;
    char s[100];
    while(scanf("%s",s)!=EOF)
    {
        if(s[0]=='+')
        {
            a=mystack.pop();
            b=mystack.pop();
            mystack.push(a+b);
        }
        else if(s[0]=='-')
        {
            b=mystack.pop();
            a=mystack.pop();
            mystack.push(a-b);
        }
        else if(s[0]=='*')
        {
            a=mystack.pop();
            b=mystack.pop();
            mystack.push(a*b);
        }
        else mystack.push(atoi(s));
    }
    printf("%d\n",mystack.pop());
    return 0;
}