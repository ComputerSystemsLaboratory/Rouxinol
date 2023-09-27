#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <queue>
#include <algorithm>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<P> vp;
typedef vector<vp> vvp;
typedef pair<int,P> pip;
typedef vector<pip> vip;
const ll inf=(ll)1<<60;
const ll mininf=(ll)1<<50;
const double pi=acos(-1);

class Graph{
	private:
	vvi Gpro;
	vector<vector<ll> > Gd;
	vvp Glist;
	int GV,GE;
	public:
	Graph(int x,int y,bool z){
		GV=x;
		GE=y;
		Gd=vector<vector<ll> >(x,vector<ll>(x,inf));
		if(z) Gpro=vvi(x,vi(x,inf));
		else Glist=vvp(x);
	}
/*	void Gpro_add(int x,int y,int z){
		Gpro[x][y]=z;
	}
	void Glist_add(int x,int y,int z){
		Glist[x].push_back(P(y,z));
	}*/
	void Gd_add(int x,int y,int z){
		Gd[x][y]=z;
	}
	ll open(int x,int y){
		return Gd[x][y];
	}
/*	void DIJplus(int x){
		priority_queue<P> que;
		Gd[x][x]=0;
		que.push(P(0,x));
		while(!que.empty()){
			P p=que.top();
			p.first*=-1;
			que.pop();
			int v=p.second;
			if(Gd[x][v]<p.first) continue;
			for(int i=0;i<Glist[v].size();i++){
				P e=Glist[v][i];
				if(Gd[x][e.first]>Gd[x][v]+e.second){
					Gd[x][e.first]=Gd[x][v]+e.second;
					que.push(P(-1*Gd[x][e.first],e.first));
				}
			}
		}
	}
	void BELLMAN(int x){
		Gd[x][x]=0;
		while(1){
			bool update=1;
			for(int i=0;i<GV;i++){
				for(int j=0;j<Glist[i].size();j++){
					P e=P(Glist[i][j].first,Glist[i][j].second);
					if(Gd[x][i]!=inf&&Gd[x][e.first]>Gd[x][i]+e.second){
						Gd[x][e.first]=Gd[x][i]+e.second;
						update=0;
					}
				}
			}
			if(update) break;
		}
	}
	bool FNL(int x){
		Gd[x][x]=0;
		for(int i=0;i<GV;i++){
			for(int j=0;j<GV;j++){
				for(int k=0;k<Glist[j].size();k++){
					P e=P(Glist[j][k].first,Glist[j][k].second);
					if(Gd[x][j]!=inf&&Gd[x][e.first]>Gd[x][j]+e.second){
						Gd[x][e.first]=Gd[x][j]+e.second;
						if(i==GV-1) return 1;
					}
				}
			}
		}
		Gd=vvi(GV,vi(GV,inf));
		return 0;
	}*/
	void WARSHALL(){
		for(int i=0;i<GV;i++) Gd[i][i]=0;
		for(int i=0;i<GV;i++){
			for(int j=0;j<GV;j++){
				for(int k=0;k<GV;k++) Gd[j][k]=min(Gd[j][k],Gd[j][i]+Gd[i][k]);
			}
		}
	}
/*	int PRIM(){
		int Gans=0;
		vi mincost(GV,inf);
		vector<bool> used(GV,1);
		mincost[0]=0;
		while(1){
			int v=-1;
			for(int i=0;i<GV;i++){
				if(used[i]&&(v==-1||mincost[i]<mincost[v])) v=i;
			}
			if(v==-1) break;
			used[v]=0;
			Gans+=mincost[v];
			for(int i=0;i<GV;i++){
				mincost[i]=min(mincost[i],Gpro[v][i]);
			}
		}
		return Gans;
	}*/
};

int V,E;

int main(){
	cin>>V>>E;
	Graph gra(V,E,0);
	for(int i=0;i<E;i++){
		int s,t,d;
		cin>>s>>t>>d;
		gra.Gd_add(s,t,d);
	}
	gra.WARSHALL();
	for(int i=0;i<V;i++){
		if(gra.open(i,i)<0){
			cout<<"NEGATIVE CYCLE"<<endl;
			return 0;
		}
	}
	for(int i=0;i<V;i++){
		for(int j=0;j<V-1;j++){
			if(gra.open(i,j)>=mininf) cout<<"INF"<<' ';
			else cout<<gra.open(i,j)<<' ';
		}
		if(gra.open(i,V-1)>=mininf) cout<<"INF"<<endl;
		else cout<<gra.open(i,V-1)<<endl;
	}
	return 0;
}