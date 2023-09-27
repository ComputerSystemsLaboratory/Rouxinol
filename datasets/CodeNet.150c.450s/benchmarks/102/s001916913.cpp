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

using namespace std;
 
const double eps=1e-10;

const int dx[]={0,0,-1,1};
const int dy[]={-1,1,0,0};

int main()
{

	int w,h;
	while(cin>>w>>h,w){
		vector<string> t(h);
		vector< vector<bool> > visited(h,vector<bool>(w,false));
		int x,y,res=0;
		for(int i=0;i<h;i++){
			cin>>t[i];
			if(t[i].find("@")!=string::npos){
				x=t[i].find("@"); y=i;
			}
		}

		queue< pair<int,int> > q;
		q.push(make_pair(y,x));

		while(!q.empty()){
			pair<int,int> p=q.front();
			q.pop();
			y=p.first; x=p.second;

			if(!visited[y][x]){
				res++;
				visited[y][x]=true;
				for(int i=0;i<4;i++){
					int nx=x+dx[i],ny=y+dy[i];
					if(0<=nx && nx<w && 0<=ny && ny<h && t[ny][nx]=='.') q.push(make_pair(ny,nx));
				}
			}
		}
		cout<<res<<endl;

	}


	return 0;
}