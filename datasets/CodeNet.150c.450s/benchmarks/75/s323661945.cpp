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

void maxHeapify(vector<int>& A,int index){
	int H = A.size();
	int left = 2*index;
	int right = 2*index+1;
	int largest = (left<=H && A[left-1]>A[index-1]) ? left : index;
	if(right<=H && A[right-1]>A[largest-1]) largest = right;

	if(largest!=index){
		swap(A[index-1],A[largest-1]);
		maxHeapify(A,largest);
	}
}

void buildMaxHeap(vector<int>& A){
	int H=A.size();
	for(int i=H/2;i>=1;i--){
		maxHeapify(A,i);
	}
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int H=in();
	auto A=vecin(H);
	buildMaxHeap(A);
	REP(i,H){
		cout << ' ' << A[i];
	}
	cout << endl;
	
	return 0;
}

