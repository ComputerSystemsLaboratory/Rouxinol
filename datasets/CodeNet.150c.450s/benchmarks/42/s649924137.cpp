#include <iostream>
#include <utility>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int n, q, t, time=0; cin >> n >> q; string name;
    queue<pair<string,int> >Q;
    for(int i=0;i<n;i++){
        cin >> name >> t;
        Q.push(make_pair(name,t));
    }
    while(!Q.empty()){
        pair<string,int> x=Q.front(); Q.pop();
        int c=min(x.second,q); x.second-=c; time+=c;
        if(x.second>0) Q.push(x);
        else cout << x.first << " " << time << endl;
    }
    return 0;
}