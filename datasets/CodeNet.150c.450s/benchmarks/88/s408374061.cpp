#include<bits/stdc++.h>
using namespace std;
int main(){

  vector <pair <int,int> > a;
  int x,y,i;
  
  for(int i=2;i<=150;i++) for(int j=1;j<i;j++) a.push_back(make_pair(i*i+j*j,j*1000+i));
  sort(a.begin(),a.end());
    
  while(cin>>y>>x,x){
    for(i=0;i<a.size();i++) if(a[i].first==x*x+y*y&&a[i].second==y*1000+x) break;
    cout<<a[i+1].second/1000<<" "<<a[i+1].second%1000<<endl;
  }
  
  return 0;
}