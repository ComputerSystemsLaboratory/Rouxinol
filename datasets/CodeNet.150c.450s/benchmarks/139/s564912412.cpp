#include<bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    int N, M;
    cin >> N >> M;

    int A[M], B[M];
    vector<int> E[N+1];
    for(int i=0; i<M; i++){
        cin >> A[i] >> B[i];
        E[A[i]].push_back(B[i]);
        E[B[i]].push_back(A[i]);
    }

    vector<int> is_search(N+1, 0);
    queue<int> q;
    q.push(1);
    is_search[1]=1;

    vector<int> ans(N+1, 0);
    ans[1]=1;
    while(!(q.empty())){
        int num=q.front();
        q.pop();
        rep(i, E[num].size()){
            if(is_search[E[num][i]]==0){
                q.push(E[num][i]);
                is_search[E[num][i]]=1;
                ans[E[num][i]]=num;
            }
        }
    }

    rep(i, N+1){
        if(i==0) continue;
        if(is_search[i]==0){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    rep(i, N+1){
        if(i==0 || i==1) continue;
        cout<<ans[i]<<endl;
    }
    return 0;
}