//Priority_queue

#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int main(void){
    priority_queue<int> Q;
    char com[10];
    int k;
    while(1){
       scanf("%s", com);
       
       if(com[0] == 'i') {
           scanf("%d", &k);
           Q.push(k);
       } else if(com[2] == 't'){
           cout << Q.top() << endl;
           Q.pop();
       } else {
           break;
       }
    }
    
    return 0;
}