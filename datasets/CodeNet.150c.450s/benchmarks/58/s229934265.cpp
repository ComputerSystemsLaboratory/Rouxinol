#include <cstdio>
#include <cstring>
#include <stack>
#include <string>

using namespace std;

int main()
{
    char buf[8];
    stack<int> stk;
    while(scanf("%s", buf)!=EOF){
        int n;
        if(!strcmp(buf, "+")){
            int op2=stk.top(); stk.pop();
            int op1=stk.top(); stk.pop();
            n=op1+op2;
        } else if(!strcmp(buf, "-")){
            int op2=stk.top(); stk.pop();
            int op1=stk.top(); stk.pop();
            n=op1-op2;
        } else if(!strcmp(buf, "*")){
            int op2=stk.top(); stk.pop();
            int op1=stk.top(); stk.pop();
            n=op1*op2;
        } else{
            n=stoi(buf);
        }
        stk.push(n);
    }
    printf("%d\n", stk.top());
    return 0;
}