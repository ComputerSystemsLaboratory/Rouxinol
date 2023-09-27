#include <bits/stdc++.h>
using ll = long long;
using namespace std;
#define rep(i,n) for(int i=0, i##_len=(int)(n); i<i##_len; i++)
#define reps(i,n) for(int i=1 , i##_len=(int)(n);i<=i##_len;i++)
#define rrep(i,n) for(int i=((int)(n)-1);i>=0;i--)
#define rreps(i,n) for(int i=((int)(n));i>0;i--)
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define mp make_pair
#define pb push_back
#define solve(a) ((a)?"Yes":"No")
typedef vector<long long> V;
typedef vector<V> VV;
typedef pair<long long , long long> P;
typedef vector<P> VP;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1;} return 0;}
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1;} return 0;}
const long long INFLL = 1LL<<55;
const int INF = 1<<30;
const double PI=acos(-1);
//ワーシャルフロイゼ法(隣接行列を受け取り、それぞれの最短を受け取る、size:10^2-)
vector<vector<long long>> WarshallFloyd(vector<vector<long long>> pathmatrix){
	int index=pathmatrix.size();
	vector<vector<long long >>res=pathmatrix;
	for (int a = 0; a < index; a++){
		for (int b = 0; b < index; b++){
			for (int c = 0; c < index; c++){ 
				chmin(res[b][c], res[b][a] + res[a][c]);
			}
		}
	}
	return (res);
}
int main(){
	int v,e;
	cin >>v>>e;
	VV path(v,V(v,INFLL));
	rep(i,v){
		path[i][i]=0LL;
	}
	int s,t;
	ll d;
	rep(i,e){
		cin>>s>>t>>d;
		path[s][t]=d;
	}
	path=WarshallFloyd(path);
	VV res=WarshallFloyd(path);
	bool con=true;
	rep(i,v){
		rep(j,v){
			con=(con&(res[i][j]==path[i][j]));
		}
	}
	if(!con){cout<<"NEGATIVE CYCLE"<<endl; return 0;}
	rep(i, v)
	{
		rep(j, v)
		{
			if(path[i][j]>(ll)1e10){
				cout<<"INF";
			}else{
				cout<<path[i][j];
			}
			if(j!=v-1){
				cout<<" ";
			}else{
				cout<<endl;
			}
		}
	}
}
