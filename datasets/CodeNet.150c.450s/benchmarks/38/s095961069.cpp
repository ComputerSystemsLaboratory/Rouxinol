#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  
  for(int i=0;i<n;++i){
    vector<int> edges(3);
    for(int j=0;j<3;++j)cin>>edges[j];
    sort(edges.begin(),edges.end());
    edges[2]*edges[2] == edges[0]*edges[0] + edges[1]*edges[1] ? cout<<"YES"<<endl : cout<<"NO"<<endl;
  }

  return EXIT_SUCCESS;
}