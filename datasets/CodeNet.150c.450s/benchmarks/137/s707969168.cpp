#include<bits/stdc++.h>
using namespace std;
#define int long long
bool ex[13][1<<(12*2)];
signed main(){
  cin.tie(0);
  ios::sync_with_stdio(0);
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    string s,t;
    cin>>s>>t;
    int k=t.size(),tmp=0;
    for(int j=0;j<k;j++){
      tmp*=4;
      if(t[j]=='A') tmp+=0;
      if(t[j]=='C') tmp+=1;
      if(t[j]=='G') tmp+=2;
      if(t[j]=='T') tmp+=3;
    }
    if(s=="insert") ex[k][tmp]=1;
    else cout<<(ex[k][tmp]?"yes":"no")<<endl;
  }
  return 0;
}