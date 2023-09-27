#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    queue<pair<string,int>> task;
    int n, q;
    cin >> n >> q;
    for(int i=0;i<n;i++){
        string name;
        int req;
        cin >> name >> req;
        task.push(make_pair(name, req));
    }
    int t=0;
    while(!task.empty()){
        auto c = task.front();
        task.pop();
        if(c.second<=q){
            t+=c.second;
            cout << c.first << ' ' << t << endl;
        }else{
            t+=q;
            task.push(make_pair(c.first, c.second-q));
        }
    }
    
    return 0;
}
