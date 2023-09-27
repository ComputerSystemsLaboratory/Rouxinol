//Pablo Squarson's Headache
#include<bits/stdc++.h>
using namespace std;

int nx[4]={-1,0,1,0}, ny[4]={0,-1,0,1};//左・下・右・上
vector<pair<int, int> > v;

int main(){
  while(true){
    int N;
    cin>>N;
    if(N==0)break;
    v.clear();
    v.push_back(pair<int, int>(0, 0));
    for(int i=0; i<N-1; i++){
      int n, d;
      cin>>n>>d;
      v.push_back(pair<int, int>(v[n].first+nx[d], v[n].second+ny[d]));
    }
    int l=0, r=0, u=0, d=0;
    for(int i=0; i<N; i++){
      if(v[i].first<l)l=v[i].first;
      if(r<v[i].first)r=v[i].first;
      if(v[i].second<d)d=v[i].second;
      if(u<v[i].second)u=v[i].second;
    }
    cout<<r-l+1<<" "<<u-d+1<<endl;
  }
  return 0;
}