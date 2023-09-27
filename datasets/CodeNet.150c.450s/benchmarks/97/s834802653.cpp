#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>
#include <queue>
#include <stack>

using namespace std;

int main()
{
	int n;
	while(cin>>n,n){
		map<pair<int,int>,int> xy;
		xy[make_pair(0,0)]++;		
		vector<pair<int,int> > vp(n);
		vp[0]=make_pair(0,0);
		
		for(int i=1;i<n;i++){
			int idx,dir;
			cin>>idx>>dir;
			int px,py;
			if(dir==0){ //L
				px=vp[idx].first-1;
				py=vp[idx].second;
			}else if(dir==1){ //D
				px=vp[idx].first;
				py=vp[idx].second+1;
			}else if(dir==2){ //R
				px=vp[idx].first+1;
				py=vp[idx].second;
			}else{ //U
				px=vp[idx].first;
				py=vp[idx].second-1;
			}
			xy[make_pair(px,py)];
			vp[i]=make_pair(px,py);
		}
		
		int w=0;
		int l=1000,r=-1000;
		for(int y=-201;y<=201;y++){
			
			for(int x=-201;x<=201;x++){
				if(xy.find(make_pair(x,y))!=xy.end()){
					l=min(x,l);
					break;
				}
			}
		}
		
		for(int y=-201;y<=201;y++){
			for(int x=201;x>=-201;x--){
				if(xy.find(make_pair(x,y))!=xy.end()){
					r=max(r,x);
					break;
				}
			}
		}
		w=r-l+1;

		int h=0;
		int d=-1000,u=1000;
		
		for(int x=-201;x<=201;x++){
			for(int y=201;y>=-201;y--){
				if(xy.find(make_pair(x,y))!=xy.end()){
					d=max(d,y);
					break;
				}
			}
		}
		for(int x=-201;x<=201;x++){
			for(int y=-201;y<=201;y++){
				if(xy.find(make_pair(x,y))!=xy.end()){
					u=min(u,y);
					break;
				}
			}
		}
		h=d-u+1;
				
		cout<<w<<" "<<h<<endl;
		

	}
	
	
	return 0;
}