#include <queue>
#include <iostream>
using namespace std;
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    int temp;
    priority_queue<int> pq;
    while(true){
        cin>>s;
        if(s.size()<5)return 0;
        else if(s[0]=='i'){
            cin>>temp;
            pq.push(temp);
        }
        else {
            cout<<pq.top()<<endl;
            pq.pop();
        }
    }
}
