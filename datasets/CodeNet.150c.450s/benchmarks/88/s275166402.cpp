#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) repi(i,0,n)
#define repi(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define pb push_back

int main(){

  vector<pair<int,pair<int,int> > > s;

  for(int i=1;i<=150;i++){
    for(int j=i+1;j<=150;j++){
      s.push_back(make_pair(i*i+j*j,make_pair(i,j)));
    }
  }
  sort(s.begin(),s.end());
  
  while(true){
    int h,w;
    cin>>h>>w;

    if(h==0&&w==0)break;

    int total=w*w+h*h;
    int tmp=total;
    int ans_h=0;
    int ans_w=0;

    for(int i=0;i<=150*150;i++){
     

	if(h==s[i].second.first&&w==s[i].second.second){
	  cout<<s[i+1].second.first<<" "<<s[i+1].second.second<<endl;
	  break;
	}
    }
  }
  return 0;
}