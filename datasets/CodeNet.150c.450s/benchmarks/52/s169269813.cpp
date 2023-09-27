#include<cstdio>
#include<stack>
#include<queue>
using namespace std;
int main(){
    stack<int>S;
    queue<int>Q;
    int train;
    while(scanf("%d",&train)!=EOF){

        if(train)S.push(train);
        else{
            Q.push(S.top());
            S.pop();
        }
    }
    while(!Q.empty()){
        printf("%d\n",Q.front());
        Q.pop();
    }

    return 0;
}