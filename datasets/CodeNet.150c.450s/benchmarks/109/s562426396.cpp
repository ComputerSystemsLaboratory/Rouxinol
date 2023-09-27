#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n,n){
    vector<pair<string,bool> >v;
    string a,b;
    for(int i=0;i<n;i++){
      cin>>a>>b;
      v.push_back(make_pair(a,1));
      v.push_back(make_pair(b,0));
    }
    sort(v.begin(),v.end());
    int ans=0,k=0;
    for(int i=0;i<v.size();i++){
	if(v[i].second)k++;
	else k--;
	ans=max(k,ans);
    }
    cout<<ans<<endl;
  }
  return 0;
}