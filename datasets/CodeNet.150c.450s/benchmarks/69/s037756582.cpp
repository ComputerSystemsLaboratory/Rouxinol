#include <iostream>
#include <stack>
using namespace std;

int func( int *ball, int n, int cur, stack<int> b, stack<int> c){
    int ball_cur = ball[cur];
    int count=0;
    
    if(cur == n){
        return 1;
    }    
    if(b.empty() || b.top() < ball_cur ){
        b.push(ball_cur);
        count+=func(ball, n, cur+1, b, c);
        b.pop();
    }
    if(c.empty() || c.top() < ball_cur ){
        c.push(ball_cur);
        count+=func(ball, n, cur+1, b, c);
        c.pop();
    }
    return count;    
}

int main(){
    int n;
    int ball[10];
    stack<int> stk_b,stk_c;
    
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<10;++j){
            cin>>ball[j];
        }
        cout << (func(ball, 10, 0, stk_b, stk_c)?"YES":"NO") << endl;
        
    }
    return 0;
}