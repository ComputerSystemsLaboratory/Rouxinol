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

ll MergeSort(vector<int>& A){
	int num = A.size();
	if(num<=1) return 0;

	ll cnt=0;
	vector<int> B(A.begin(),A.begin()+num/2);
	vector<int> C(A.begin()+num/2,A.end());

	cnt += MergeSort(B);
	cnt += MergeSort(C);

	int ai=0,bi=0,ci=0;
	int bnum=B.size(),cnum=C.size();
	while(ai<num){
		if(bi<bnum && (ci==cnum || B[bi]<=C[ci])){
			A[ai++] = B[bi++];
		} else {
			cnt += num/2-bi;
			A[ai++] = C[ci++];
		}
	}
	return cnt;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N=in();
	auto A=vecin(N);
	auto num = MergeSort(A);

	out(num);
	return 0;
}

