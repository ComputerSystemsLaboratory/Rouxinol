#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<queue>
#include<map>
#define all(x) (x).begin(),(x).end()
#define print(x) cout << (x) << endl
typedef long long ll;
const ll MOD = 1000000007;
const ll MOD2 = 998244353;
 
using namespace std;
using Graph = vector<vector<int>>;

int main(){
    int N, M;   cin >> N >> M;
    Graph G(N+1);
    queue<int> que;
    vector<int> ans(N+1,0);
    for(int i=0; i<M; i++){
        int A, B;   cin >> A >> B;
        G[A].push_back(B);
        G[B].push_back(A);
    }
    ans[1] = 1;
    que.push(1);
    while(!que.empty()){
        int x = que.front();
        que.pop();
        for(int i : G[x]){
            if(ans[i] > 0)  continue;
            ans[i] = x;
            que.push(i);
        }
    }
    for(int i=2; i<N+1; i++) if(ans[i] == 0){print("No"); return 0;}
    print("Yes");
    for(int i=2; i<N+1; i++) print(ans[i]);
}