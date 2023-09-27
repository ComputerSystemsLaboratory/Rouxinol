#include <bits/stdc++.h>
using namespace std;

int main(){
    string com;
    priority_queue<int> PQ;

    while(1){
        cin >> com;
        if(com=="insert"){
            int key; scanf("%d",&key);
            PQ.push(key);
        } else if(com=="extract"){
            printf("%d\n",PQ.top());
            PQ.pop();
        } else if(com=="end"){
            break;
        }
    }
}