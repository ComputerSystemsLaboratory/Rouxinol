#include <bits/stdc++.h>
using namespace std;

int t;
string s;
priority_queue<int>pq;

int main() {
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    while (1) {
        cin>>s;
        if (s=="end") break;
        if (s=="extract") cout<<pq.top()<<'\n', pq.pop();
        else cin>>t, pq.push(t);
    }
}
