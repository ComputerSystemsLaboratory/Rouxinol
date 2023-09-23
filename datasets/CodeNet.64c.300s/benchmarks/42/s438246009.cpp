#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
using namespace std;
bool debug=false;

int main(){
  int n,m;
  while(1){
    cin>>n;
    if(n==0)break;

    pair<int,int>p[22];
    for(int i=0;i<n;i++)cin>>p[i].first>>p[i].second;

    cin>>m;
    int x=10,y=10;
    int cnt=0;
    for(int i=0;i<m;i++){
      char a;int b;
      cin>>a>>b;
      
      if(a=='N'){

	for(int j=0;j<n;j++){
	  if(x==p[j].first&&y<=p[j].second&&p[j].second<=y+b){
	    cnt++;
	    p[j].first=INF;p[j].second=INF;
	  }
	}
	y+=b;
	
      }else if(a=='S'){

	for(int j=0;j<n;j++){
	  if(x==p[j].first&&y-b<=p[j].second&&p[j].second<=y){
	    cnt++;
	    p[j].first=INF;p[j].second=INF;
	  }
	  
	}

	y-=b;
	
      }else if(a=='W'){

	for(int j=0;j<n;j++){
	  if(y==p[j].second&&x-b<=p[j].first&&p[j].first<=x){
	    cnt++;
	    p[j].first=INF;p[j].second=INF;
	  }
	  
	}
	x-=b;
	
      }else if(a=='E'){

	for(int j=0;j<n;j++){
	  if(y==p[j].second&&x<=p[j].first&&p[j].first<=x+b){
	    cnt++;
	    p[j].first=INF;p[j].second=INF;
	  }
      
	}
	x+=b;
	
      }
      if(debug)cout<<"("<<x<<","<<y<<")"<<endl;
    }
    if(cnt==n)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}