#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int num;
    priority_queue<int> pq;
    while(cin>>s){
        if(s=="insert"){
            cin>>num;
            pq.push(num);
        }
        else if(s=="extract"){
            cout<<pq.top()<<'\n';
            pq.pop();
        }
        else{
            while(!pq.empty())
                pq.pop();
        }
    }
    return 0;
}

