#include<stdio.h>
#include<stdlib.h>
#include<stack>
using namespace std;
stack<int> cal;
char s[6];
int main(){
    while(scanf("%s",s)!=EOF){
        if(s[0]=='+'){
            int a=cal.top();
            cal.pop();
            int b=cal.top();
            cal.pop();
            cal.push(a+b);
        }
        else if(s[0]=='*'){
            int a=cal.top();
            cal.pop();
            int b=cal.top();
            cal.pop();
            cal.push(a*b);
        }
        else if(s[0]=='-'){
            int a=cal.top();
            cal.pop();
            int b=cal.top();
            cal.pop();
            cal.push(b-a);
        }
        else cal.push(atoi(s));
    }
    printf("%d\n",cal.top());
    return 0;
}