#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int d[128][128],solve[128];
int main(){
      //input
      int n,m,row,t;
      queue<int> que;
      cin >> n;
      for(int i= 0;i<n;i++){
            cin >>row>>m;
            for(int j = 0;j<m;j++){
                  cin>>t;
                  d[row][t] = 1;
            }
      }
      //debug
      //for(int i = 0;i<=n;i++){
      //for(int j = 0;j<=n;j++)cout << d[i][j] << ' ';cout << endl;}

      //solve
      fill(solve,solve+n+2,-1);
      que.push(1);
      solve[1] = 0;
      while(!que.empty())
      {
            int p = que.front();
            que.pop();
            for(int i = 1;i<=n;i++)
            {
                  if(d[p][i] && solve[i]==-1)
                  {
                        que.push(i);
                        solve[i] = solve[p] + 1;
                  }
            }
      }
      for(int i = 1;i<=n;i++)
            cout << i << ' '<< solve[i]<<endl;


}