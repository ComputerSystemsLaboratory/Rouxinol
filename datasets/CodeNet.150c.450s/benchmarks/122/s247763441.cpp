#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    string order;
    while(true){
        cin >> order;
        if(order == "insert"){
            int key;
            cin >> key;
            pq.push(key);
        }
        else if(order == "extract"){
            cout<<pq.top()<<endl;
            pq.pop();
        }
        else if(order == "end"){
            break;
        }
    }
    return 0;
}