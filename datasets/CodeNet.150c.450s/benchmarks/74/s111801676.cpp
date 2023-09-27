#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const int INF=1e9;
typedef pair<int,int> P;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
vector<vector<bool>> used(21,vector<bool>(50001,false));
vector<vector<int>> mem(21,vector<int>(50001));
 vector<int> A;
int N,M;

int dfs(int i,int j){
    if(j==N)return 0;
    if(i==M||j>N)return INF;
    if(used.at(i).at(j))return mem.at(i).at(j);
    used.at(i).at(j)=true;
    int a=dfs(i,j+A.at(i))+1;
    int b=dfs(i+1,j);
    return mem.at(i).at(j)=min(a,b); 
}


int main(){
  cin>>N>>M;
  A.resize(M);
  for(int i=0;i<M;i++){
      cin>>A.at(i);
  }
 int ans=dfs(0,0);
  cout<<ans<<endl;
}
