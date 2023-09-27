#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(cin>>n,n){
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int res=1e9;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
	res=min(res,abs(a[i]-a[j]));
      }
    }
    cout<<res<<endl;
  }
  return 0;

}