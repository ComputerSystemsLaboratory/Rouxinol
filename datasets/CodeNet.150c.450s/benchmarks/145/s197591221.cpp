#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <stack>
typedef long long int lli;
using namespace std;

//1
/*
int main(){
	int hoge[5];
	int sum=0;
	for(int i=0; i<5; ++i){
		cin >> hoge[i];
		if(hoge[i]<40) hoge[i]=40;
		sum+=hoge[i];
	}
	cout << sum/5 << "\n";
	return 0;
}*/

//2
/*
int main(){
	int N,M;
	cin >> N >> M;
	vector<int> cost(N);
	vector<int> border(M);
	vector<int> pnt(N);
	for(int i=0; i<N; ++i){
		cin >> cost[i];
	}
	for(int i=0; i<M; ++i){
		cin >> border[i];
	}
	for(int i=0; i<M; ++i){
		for(int j=0; j<N; ++j){
			if(border[i]>=cost[j]){
				++pnt[j];
				break;
			}
		}
	}
	int max_p=-1;
	int ans;
	for(int i=0; i<N; ++i){
		if(pnt[i]>max_p) {
			max_p=pnt[i];
			ans=i+1;
		}
	}
	cout << ans << "\n";
	return 0;
}*/

/*
const int INF=10000000;
const int MAX_W=10000;
const int MAX_H=10000;
int dx[6]={-1,-1,0,1,1,0};
int dy[6]={0,-1,-1,0,1,1};
int H,W,N;
int maze[MAX_W+1][MAX_H+1];
int d[MAX_W+1][MAX_H+1];

int main(){
	cin >> W >> H >> N;
	vector<int> ans(N+1);
	vector<int> gx(N+1);
	vector<int> gy(N+1);
	for(int i=1; i<N+1; ++i){
		cin >> gx[i] >> gy[i];
	}
	for(int i=0; i<W+1; ++i)
		for(int j=0; j<H+1; ++j) d[i][j]=INF;
	int sx=gx[1],sy=gy[1];
	d[sx][sy]=0;
	for(int i=2; i<N+1; ++i){
		queue<int> qux;
		queue<int> quy;
		int x;
		int y;
		qux.push(sx);
		quy.push(sy);
		while(qux.size()&&quy.size()){
			//cout << "ok";
			x=qux.front();
			y=quy.front();
			qux.pop();
			quy.pop();

			if(x==gx[i]&&y==gy[i]){
				ans[i]=d[x][y];
				for(int j=0; j<W+1; ++j)
					for(int k=0; k<H+1; ++k) d[j][k]=INF;
				sx=x;
				sy=y;
				d[sx][sy]=0;
				break;
			}
			for(int j=0; j<6; ++j){
				int nx=x+dx[j],ny=y+dy[j];
				if(1<=nx&&nx<=W&&1<=ny&&ny<=H&&d[nx][ny]==INF){
					if((x<=nx&&nx<=gx[i]&&y<=ny&&ny<=gy[i])||(gx[i]<=nx&&nx<=x&&y<=ny&&ny<=gy[i])||(gx[i]<=nx&&nx<=x&&gy[i]<=ny&&ny<=y)||(x<=nx&&nx<=gx[i]&&gy[i]<=ny&&ny<=y)){
					qux.push(nx);
					quy.push(ny);
					d[nx][ny]=d[x][y]+1;
					}
				}
			}
		}
	}
	long long int ANS=0;
	for(int i=1; i<=N; ++i){
		//cout << ans[i] << "\n";
		ANS+=ans[i];
	}
	cout << ANS << "\n";
}*/

int main(){
	string word,LONG="",MAX_S;
	map<string,int> cnt;
	int MAX_I=0;
	while(cin>>word){
		if(word.size()>LONG.size()){
			LONG=word;
		}
		++cnt[word];
	}
	map<string,int>::iterator it=cnt.begin();
	for( ; it!=cnt.end(); ++it){
		if(it->second>MAX_I) {
			MAX_I=it->second;
			MAX_S=it->first;
		}
	}
	cout << MAX_S << " " << LONG << "\n";
	return 0;
}