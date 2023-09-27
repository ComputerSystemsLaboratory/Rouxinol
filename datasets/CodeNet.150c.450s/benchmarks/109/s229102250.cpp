#include<set>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i;
  int n;
  int mx;
  multiset<pair<int,int> > a;
  multiset<pair<int,int> >::iterator it;
  while(cin>>n&&n){
    a.clear();
    for(i=0;i<n;i++){
      int t,u,v,w,x,y;
      scanf("%d:%d:%d%d:%d:%d",&t,&u,&v,&w,&x,&y);
      a.insert(make_pair(t*3600+u*60+v,1));
      a.insert(make_pair(w*3600+x*60+y,0));
    }
    mx=0;
    i=0;
    for(it=a.begin();it!=a.end();it++){
      if((*it).second){
	i++;
	mx=max(mx,i);
      }else
	i--;
    }
    cout<<mx<<endl;
  }
  return 0;
}