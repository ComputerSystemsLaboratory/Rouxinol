#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(void){
  int N;
  while(cin>>N,N){
  	pair<int,int> sqp[200];
  	sqp[0].first=0;sqp[0].second=0;
  	int maxx=0,maxy=0,minx=0,miny=0;
  	for(int i=1,n,d;i<N;++i){
    	cin>>n>>d;
  		int x=sqp[n].first,y=sqp[n].second;
  		sqp[i].first=x;
  		sqp[i].second=y;
  		if(d%2==0) sqp[i].first=x+((d/2)?1:-1);
  		else sqp[i].second=y+((d/2)?-1:1);
  		maxx=max(sqp[i].first,maxx);
  		minx=min(sqp[i].first,minx);
  		maxy=max(sqp[i].second,maxy);
  		miny=min(sqp[i].second,miny);
  		//cerr<<maxx<<" "<<minx<<" "<<maxy<<" "<<miny<<" "<<endl;
  	}
  	cout<<(maxx-minx+1)<<" "<<(maxy-miny+1)<<endl;
  }
  return 0;
}