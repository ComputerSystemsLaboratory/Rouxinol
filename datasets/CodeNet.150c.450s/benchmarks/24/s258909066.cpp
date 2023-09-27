#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

void calc_danger(int res,int i,pair<int,int> b[],int n){
  int danger=0;
  danger+=res*(-1)*b[i].first;
  for(int j=0;j<i;j++){
    danger+=b[j].first*b[j].second;
  }
  cout<<danger<<endl;
  return;
}

int main(){
  int n,m;
  int danger;
  while(cin>>n>>m){
    if(n==0&&m==0) break;
    int d[n],p[n];
    pair<int,int> b[n];
    for(int i=0;i<n;i++){
      cin>>d[i]>>p[i];
      b[i]=make_pair(p[i],d[i]);
    }
    sort(b,b+n);
    int res=m;
    for(int i=n-1;i>=0;i--){
      res=res-b[i].second;
      if(res<=0){
        calc_danger(res,i,b,n);
	break;
      }else if(i==0){
cout<<0<<endl;
}
    }
  }
  return 0;
}

    