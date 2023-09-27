#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n,n!=0){
    vector<pair<string,string> >pcc;
    vector<string> vc;
    for(int i=0;i<n;i++){
      string a,b;
      cin>>a>>b;
      pcc.push_back(make_pair(a,b));
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
      string a;
      cin>>a;
      for(int j=0;j<n;j++){
	if(a==pcc[j].first){
	  a=pcc[j].second;
	  break;
	}
      }
      vc.push_back(a);
    }
    for(int k=0;k<m;k++)
      cout<<vc[k];
    cout<<endl;
  }
  return 0;
}