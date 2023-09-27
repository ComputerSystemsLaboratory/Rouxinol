#include <cstdio>
#include <stack>
#include <cstdlib>

using namespace std;
int main(){
    char a[110];
    stack<int> s;
    while(scanf("%s", a)!=EOF){
        if(a[0] == '+'){
            int x = s.top(); s.pop();
            int y = s.top(); s.pop();
            s.push(x+y);
        }
        else if(a[0] == '-'){
            int x = s.top(); s.pop();
            int y = s.top(); s.pop();
            s.push(y-x);
        }
        else if(a[0] == '*'){
            int x = s.top(); s.pop();
            int y = s.top(); s.pop();
            s.push(x*y);
        }
        else if(a[0] == '/'){
            int x = s.top(); s.pop();
            int y = s.top(); s.pop();
            s.push(y/x);
        }
        else{
            s.push(atoi(a));
        }
    }
    printf("%d\n", s.top());
    return 0;
}
