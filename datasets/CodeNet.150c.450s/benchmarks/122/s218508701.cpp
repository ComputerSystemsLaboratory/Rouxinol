#include <iostream>
#include <queue>
#include <string.h>

using namespace std;


int main() {
    priority_queue<int> pq;
    string str;
    while(1){
        cin>>str;
        if (str=="end"){
            break;
        } else if(str=="insert"){
            int key;
            scanf("%d",&key);
            pq.push(key);
        } else if(str=="extract"){
            printf("%d\n",pq.top());
            pq.pop();
        }
    }
    return 0;
}