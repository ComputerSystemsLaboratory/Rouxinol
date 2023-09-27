#include <iostream>
#include <fstream>
#include <typeinfo>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <algorithm>
#include <cstdio>
#include <queue>
#include <iomanip>
#include <cctype>
#define syosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<double,double> pdd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const int inf=1<<25;
const double pi=acos(-1);
const double eps=1e-10;
const vi emp;

const int dx[2]={1,0},dy[2]={0,1};

int h,w,n;
ll ans;
vvb field;

void bfs(){
	queue<P> que;
	que.push(P(0,0));
	while(!que.empty()){
		P p=que.front();
		que.pop();
		if(p==P(h-1,w-1)){
			ans++;
			continue;
		}
		for(int i=0;i<2;i++){
			int cx=p.first+dx[i],cy=p.second+dy[i];
			if(cx>=0&&cx<h&&cy>=0&&cy<w&&!field[cx][cy]) que.push(P(cx,cy));
		}
	}
}

int main(){
	while(1){
		cin>>h>>w;
		if(!h&&!w) break;
		ans=0;
		field=vvb(h,vb(w));
		cin>>n;
		int x,y;
		for(int i=0;i<n;i++){
			cin>>x>>y;
			field[x-1][y-1]=1;
		}
		bfs();
		cout<<ans<<endl;
	}
}