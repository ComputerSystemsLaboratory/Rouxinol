#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)   FOR(i,0,n)
#define pb emplace_back
typedef long long ll;
typedef pair<int,int> pint;

priority_queue<int> pq;
int main(){
    string s;
    int x;
    while(1){
        cin>>s;
        if(s[2]=='d') break;
        else if(s[0]=='i'){
            cin>>x;
            pq.push(x);
        }
        else{
            cout<<pq.top()<<endl;
            pq.pop();
        }
    }
    return 0;
}
