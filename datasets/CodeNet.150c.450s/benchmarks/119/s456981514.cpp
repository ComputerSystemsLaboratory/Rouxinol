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

const int dy[]={-1,-1,0,1,1, 1, 0,-1};
const int dx[]={ 0, 1,1,1,0,-1,-1,-1};

int main()
{

	int w,h;
	while(cin>>w>>h,w){
		vector< vector<int> > table(h,vector<int>(w));
		int res=0;
		for(int y=0;y<h;y++){
			for(int x=0;x<w;x++) cin>>table[y][x];
		}

		queue< pair<int,int> > q;

		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){

				if(table[i][j]==0) continue;

				res++;
				q.push(make_pair(i,j));

				while(!q.empty()){
					pair<int,int> p=q.front();
					q.pop();
					int y=p.first,x=p.second;

//					cout<<y<<" "<<x<<endl;

					if(table[y][x]==0) continue;

					table[y][x]=0;
					for(int k=0;k<8;k++){
						int nx=x+dx[k],ny=y+dy[k];
						if(0<=nx && nx<w && 0<=ny && ny<h && table[ny][nx]==1) q.push(make_pair(ny,nx));
					}
				}
			}
		}
		cout<<res<<endl;

	}


	return 0;
}