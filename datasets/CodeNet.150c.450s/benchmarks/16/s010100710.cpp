#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
#include<stack>
using namespace std;
int main(){
    stack<int> ST;
    stack<pair<int, int> > MIZU;
    char YAMA[2000001];
    int sum = 0;
    
    cin >> YAMA;
    int len = strlen(YAMA);
    for (int i = 0; i < len; i++) {
        if (YAMA[i] == '\\') ST.push(i);
        else if(YAMA[i] == '/' && ST.size() > 0){
            int ker = ST.top();ST.pop();
            sum += i-ker;
            int mymizu = i-ker;
            while (MIZU.size() > 0 && ker < MIZU.top().first) {
                mymizu += MIZU.top().second; MIZU.pop();
            }
            MIZU.push(make_pair(ker,mymizu));
        }
    }
    
    stack<int> ss;
    
    while (MIZU.size() > 0) {
        ss.push(MIZU.top().second);
        MIZU.pop();
    }
    int coun = ss.size();
    printf("%d\n",sum);
    printf("%d",coun);
    while (ss.size() > 0) {
        printf(" %d",ss.top());
        ss.pop();
    }
    printf("\n");
    return 0;
}