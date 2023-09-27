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

	int H=in();
	auto A=vecin(H);
	REP(i,H){
		int key = A[i];
		cout << "node " << i+1 << ": key = " << key << ", ";
		int parent = (i+1)/2;
		if(i>0){
			cout << "parent key = " << A[parent-1] << ", ";
		}
		int left = 2*(i+1);
		if(left<=H){
			cout << "left key = " << A[left-1] << ", ";
		}
		int right = 2*(i+1)+1;
		if(right<=H){
			cout << "right key = " << A[right-1] << ", ";
		}
		cout << endl;
	}
	
	return 0;
}

