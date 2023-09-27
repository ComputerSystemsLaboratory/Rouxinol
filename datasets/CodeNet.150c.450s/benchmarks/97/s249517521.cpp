#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
enum{LEFT,DOWN,RIGHT,UP};

int main(){
     vector< pair<int,int> > pieces;
     int N;
     while(1){
	  pieces.clear();
	  pieces.push_back(pair<int,int>(0,0));
	  cin>>N;
	  if(N==0)break;
	  int maxx,maxy,minx,miny;
	  maxx=maxy=minx=miny=0;
	  for(int i=0;i<N-1;i++){
	       int ni,di;
	       cin>>ni>>di;
	       //cout<<"N"<<i+1<<"="<<ni<<endl;
	       int x=pieces[ni].first;//cout<<"x="<<x<<endl;
	       int y=pieces[ni].second;//cout<<"y="<<y<<endl;
	       switch(di){
	       case LEFT:
		    x=x-1;
		    break;
	       case DOWN:
		    y=y-1;
		    break;
	       case RIGHT:
		    x=x+1;
		    break;
	       case UP:
		    y=y+1;
		    break;
	       }
	       maxx=max(maxx,x);
	       maxy=max(maxy,y);
	       minx=min(minx,x);
	       miny=min(miny,y);
	       pieces.push_back(pair<int,int>(x,y));
	  }
	  //cout<<maxx<<" "<<maxy<<endl;
	  //cout<<minx<<" "<<miny<<endl;
	  cout<<maxx-minx+1<<" "<<maxy-miny+1<<endl;
     }
}