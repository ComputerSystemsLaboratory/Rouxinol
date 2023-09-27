#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
using namespace std;

int main(){
    priority_queue<int> pq;
    string s;
    cin>>s;

    while(s!="end"){
        
        if(s=="insert"){
            int a;
            cin>>a;
            pq.push(a);
        }
        else if(s=="extract"){
            cout<<pq.top()<<endl;
            pq.pop();
        }
        cin>>s;
    }
    return 0;
}
