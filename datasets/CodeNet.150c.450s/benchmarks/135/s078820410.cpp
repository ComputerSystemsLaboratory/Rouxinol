#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
  int n,m;
  while(cin>>n>>m,n||m){
    vector<int> tate(n+1,0),yoko(m+1,0);
    map<int,int> tatec,yokoc;
    for(int i=1,p,q=0;i<=n;++i){
      cin>>p;q+=p;
      tate[i]=q;
    }
    for(int i=1,p,q=0;i<=m;++i){
      cin>>p;q+=p;
      yoko[i]=q;
    }
    for(int i=0;i<n;++i) for(int j=i+1;j<=n;++j) ++tatec[tate[j]-tate[i]];
    for(int i=0;i<m;++i) for(int j=i+1;j<=m;++j) ++yokoc[yoko[j]-yoko[i]];
    int ans=0;
    for(map<int,int>::iterator it=tatec.begin();it!=tatec.end();++it){
      if(yokoc.find(it->first)!=yokoc.end()) ans+=(it->second)*(yokoc[it->first]);
    }
    cout<<ans<<endl;
  }
  return 0;
}