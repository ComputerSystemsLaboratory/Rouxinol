#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector< pair <int,pair <int,int> > > n;
  for(int i=1;i<=150;i++){
    for(int j=i+1;j<=150;j++){
      n.push_back(make_pair(i*i+j*j,make_pair(i,j)));
    }
  }
  sort(n.begin(),n.end());
  int h,w;
  while(cin>>h>>w,h){
    for(int i=0;i<n.size();i++){
      if(h*h+w*w==n[i].first&&h==n[i].second.first&&n[i].second.second){
	cout<<n[i+1].second.first<<" "<<n[i+1].second.second<<endl;
	break;
      }
    }
  }
  return 0;
}