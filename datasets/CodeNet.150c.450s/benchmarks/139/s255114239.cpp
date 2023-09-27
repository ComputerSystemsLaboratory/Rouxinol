#include <bits/stdc++.h>
using namespace std;
#define	rep(i,n)	for(int i=0;i<n;i++)
int main(){
  long long n,m;	cin >> n >> m;
  vector<vector<long long>>	data(n);
  rep(i,m){
    long long a,b;	cin >> a >> b;	a--;	b--;
    data[a].push_back(b);
    data[b].push_back(a);
  }
  
  vector<long long>	k(n,-1);
  k[0]=0;
  queue<long long>	p;
  p.push(0);

  while(!p.empty()){
    long long x=p.front();	p.pop();
    for(long long xi:data[x]){
      if(k[xi]!=-1)	continue;
      k[xi]=x;
      p.push(xi);
    }
  }
  
  for(long long x:k){
    if(x!=-1)	continue;
    cout << "No";
    return 0;
  }
  
  cout << "Yes" << endl;
  for(int i=1;i<n;i++){
    cout << k[i]+1 << endl;
  }
  
}