#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n&&n){
    vector<int> d(n);
    for(int i=0;i<n;++i) cin>>d[i];
    sort(d.begin(),d.end());
    int s=d[1]-d[0];
    for(int i=1;i<n-1;++i)
      if(s>d[i+1]-d[i]) s=d[i+1]-d[i];
    cout<<s<<endl;
  }
  return 0;
}

