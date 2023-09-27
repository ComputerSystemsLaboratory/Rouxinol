#include <stack>
#include <cstdio>
using namespace std;

int main(){
    int s;
    stack<int> stk;
    while(~scanf("%d",&s)){
        if(s){
            stk.push(s);
        } else {
            printf("%d\n",stk.top());
            stk.pop();
        }
    }
}