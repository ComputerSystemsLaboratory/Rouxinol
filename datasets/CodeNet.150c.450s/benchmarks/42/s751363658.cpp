#include <string>
#include <queue>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    queue<string> S;
    queue<int> Q;
    for(int i = 0; i < n; i++){
        string name;
        int time;
        cin >> name >> time;
        S.push(name);
        Q.push(time);
    }
    int timesum = 0;
    while(!S.empty()){
        if(Q.front() - q > 0){
            timesum += q;
            S.push(S.front());
            S.pop();
            Q.push(Q.front() - q);
            Q.pop();
        }else{
            timesum += Q.front();
            printf("%s %d\n", S.front().c_str(), timesum);
            S.pop();
            Q.pop();
        }
    }
}