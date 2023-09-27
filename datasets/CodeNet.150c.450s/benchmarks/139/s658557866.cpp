#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<vector<int>> r(n,vector<int>(0));
  vector<int> sig(n,200005);
  
  for(int i=0;i<m;i++){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    r[a-1].push_back(b);
    r[b-1].push_back(a);
  }
  
  queue<int> p;
  p.push(1);
  
  while(p.size()){
    int s=p.front();
    p.pop();
    for(int i=0;i<r[s-1].size();i++){
      if(sig[r[s-1][i]-1]==200005){
        sig[r[s-1][i]-1]=s;
        p.push(r[s-1][i]);
      }
    }
  }

  cout << "Yes" << endl;

  for(int i=1;i<n;i++){
    cout << sig[i] << endl;
  }
}