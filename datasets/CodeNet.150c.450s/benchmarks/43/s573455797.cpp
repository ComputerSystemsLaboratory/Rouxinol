#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n,n!=0){
    vector<pair<int,int> > pii;
    int pa=0,pb=0;
    for(int i=0;i<n;i++){
      int a,b;
      cin>>a>>b;
      pii.push_back(make_pair(a,b));
      if(pii[i].first>pii[i].second)
	pa+=(pii[i].first+pii[i].second);
      else if(pii[i].first<pii[i].second)
	pb+=(pii[i].first+pii[i].second);
      else{
	pa+=pii[i].first;pb+=pii[i].second;
      }
    }
    cout<<pa<<" "<<pb<<endl;
  }
  return 0;
}