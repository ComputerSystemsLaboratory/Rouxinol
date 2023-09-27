#include "bits/stdc++.h"

#define REP(i,num) for(int i=0;i<(num);++i)
#define ALL(c) c.begin(),c.end()
#define PRINTALL(c) for(auto& x:c){cout<<x<<' ';}cout<<endl;
#define PAIRCOMP(c,comp) [](const pair<ll,ll>& lhs,const pair<ll,ll>& rhs){return lhs.c comp rhs.c;}

using namespace std;
using ll = long long;

constexpr ll atcoder_mod = 1e9+7;

template<typename T=int>
T in(){T x; cin >> x; return (x);}
template<typename T=int,typename C=vector<T>>
C vecin(int N){C x(N);REP(i,N){x[i]=in<T>();}return move(x);}

void vout(){cout << endl;}
template<typename Head,typename... Tail>
void vout(Head&& h,Tail&&... t){cout << ' ' << h;vout(forward<Tail>(t)...);}
void out(){cout << endl;}
template<typename Head,typename... Tail>
void out(Head&& h,Tail&&... t){cout << h;vout(forward<Tail>(t)...);}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N=in();
	REP(i,N){
		double x[4],y[4];
		cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3];
		double vx[2],vy[2],vn[2];
		vx[0]=x[1]-x[0],vy[0]=y[1]-y[0],vn[0]=hypot(x[1]-x[0],y[1]-y[0]);
		vx[0]/=vn[0];
		vy[0]/=vn[0];
		vx[1]=x[3]-x[2],vy[1]=y[3]-y[2],vn[1]=hypot(x[3]-x[2],y[3]-y[2]);
		vx[1]/=vn[1];
		vy[1]/=vn[1];
		if(abs(vx[0]*vy[1]-vy[0]*vx[1])<=1e-7) out("YES");
		else out("NO");
	}
	
	return 0;
}

