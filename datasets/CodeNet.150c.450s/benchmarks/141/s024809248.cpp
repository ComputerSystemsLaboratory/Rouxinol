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
	//cin.tie(0);
	//ios::sync_with_stdio(false);
	
	double x1;
	while(cin>>x1){
		double x[3],y[3],px,py;
		x[0]=x1;
		cin>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>px>>py;
		double c[3];
		for(int i=0;i<3;i++){
			double vx1 = x[(i+1)%3]-x[i],vy1 = y[(i+1)%3]-y[i];
			double vx2 = px-x[i],vy2 = py-y[i];
			c[i] = vx1*vy2-vy1*vx2;
		}
		if((c[0]>0&&c[1]>0&&c[2]>0)||(c[0]<0&&c[1]<0&&c[2]<0)) out("YES");
		else out("NO");
	}

	return 0;
}
