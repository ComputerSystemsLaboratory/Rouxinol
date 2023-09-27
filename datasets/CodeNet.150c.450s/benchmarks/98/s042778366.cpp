#include <algorithm>
#include <iostream>
using namespace std;
int t[200],h[200];
int main(){
  int n,m;
  while(cin>>n>>m,n||m){
    for(int i=0;i<n;++i) cin>>t[i];
    for(int i=0;i<m;++i) cin>>h[i];
    int S=0,H=0;
    for(int i=0;i<n;++i) S+=t[i];
    for(int i=0;i<m;++i) H+=h[i];
    int c = 1<<28;    
    int s1=-1,s2=-1;
    for(int i=0;i<n;++i)
      for(int j=0;j<m;++j){
	if(S-t[i]+h[j]==H-h[j]+t[i] && c>t[i]+h[j]){
	  c=t[i]+h[j];
	  s1=t[i];
	  s2=h[j];
	}
      }
    if(c==1<<28) cout << -1 << endl;
    else cout << s1 << " " << s2 << endl;
  }
  return 0;
}