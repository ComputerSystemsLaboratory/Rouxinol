//??????????????????
#include<queue>
#include<string>
#include<iostream>
using namespace std;

int main(){
    string cmd;
    int x;
    priority_queue<int> Q;
    while(cin>>cmd&&cmd!="end"){
        if(cmd=="insert"){
            cin>>x;
            Q.push(x);
        }
        else if(cmd=="extract"){
            cout<<Q.top()<<"\n";
            Q.pop();
        }
    }
}