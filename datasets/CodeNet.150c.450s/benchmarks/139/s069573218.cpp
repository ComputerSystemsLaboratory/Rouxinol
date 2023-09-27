#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<set<int>> path(n);
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;
        path.at(a-1).insert(b-1);
        path.at(b-1).insert(a-1);
    }
    queue<int> q;
    vector<int> depth(n,-1);
    vector<int> done(n,0);
    vector<int> parent(n,0);
    q.push(0);
    done.at(0) = 1;
    depth.at(0) = 0;
    while(! q.empty()){
        int front = q.front();
        done.at(front) = 1;
        for(auto value : path.at(front)){
            if(done.at(value)==0){
                q.push(value);
                done.at(value) = 1;
                depth.at(value) = depth.at(front)+1;
                parent.at(value) = front;
            }
        }
        q.pop();
    }
    
    for(int i=0; i<n; i++){
        if(depth.at(i) == -1){
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    for(int i=1; i<n; i++){
        cout << parent.at(i) + 1 << endl;
        //cout << depth.at(i)  << endl;
    }
}
