#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
  int n;
  cin >> n;

  vector<int> list[100];

  for(int i=0;i<n;i++){
    int u,k;
    cin >> u >> k;
    for(int j=0;j<k;j++){
      int v;
      cin >> v;
      list[u-1].push_back(v-1);
    }
  }
  
  int d[100],f[100];
  for(int i=0;i<n;i++) d[i]=f[i]=0;

  stack<int> cur;
  cur.push(0);
  d[0]=1;

  for(int t=2;!cur.empty();t++){
    bool fl=false;
    for(vector<int>::iterator it=list[cur.top()].begin();it!=list[cur.top()].end();it++){
      if(d[*it]==0){
        d[*it]=t;
        fl=true;
        cur.push(*it);
        break;
      }
    }
    if(fl) continue;

    f[cur.top()]=t;
    cur.pop();

    if(cur.empty()){
      for(int i=0;i<n;i++){
        if(d[i]==0){
          t++;
          cur.push(i);
          d[i]=t;
          break;
        }
      }
    }
  }

  for(int i=0;i<n;i++)
    cout << (i+1) << ' ' << d[i] << ' ' << f[i] << endl;

  return 0;
}