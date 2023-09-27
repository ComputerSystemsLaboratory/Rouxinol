#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main (){
    int N, M;
    cin >> N >> M;
    vector<vector<int>> node(N+1);
    
    int A,B;
    rep(i, M){
        cin >> A >> B;
        node.at(A).push_back(B);
        node.at(B).push_back(A);
    }
    queue<int> que;
    vector<int> ans(N+1,0);

    que.push(1);
    ans.at(1) = 1;
    while(!que.empty()){
        int new_node = que.front();
        que.pop();
        for(auto x:node.at(new_node)){
            if(ans.at(x) == 0){
                que.push(x);
                ans.at(x) = new_node;
            }
        }
    }
    cout << "Yes" << endl;
    for(int i = 2; i <= N; i++){
        cout << ans.at(i) << endl;
    }
}