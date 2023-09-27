#include <cstdio>
#include <string>
#include <queue>
#include <iostream>

using namespace std;

int main(){
    string s;

    priority_queue<int> PQ;

    while(1){

        cin>>s;
        
        if(s=="end")break;
        else if(s=="insert"){
            int num;
            cin>>num;
            PQ.push(num);
        }else if(s=="extract"){
            cout<<PQ.top()<<endl;
            PQ.pop();

        }
    }
    return 0;
}