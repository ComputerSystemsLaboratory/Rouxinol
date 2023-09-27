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

class Card{
public:
	int num,index;
	char mark;
};

int Partition(vector<Card>& A,int p,int r){
	int x = A[r].num;
	int index = p-1;
	for(int i=p;i<r;i++){
		if(A[i].num<=x){
			index++;
			swap(A[i],A[index]);
		}
	}
	swap(A[index+1],A[r]);
	return index+1;
}

void QuickSort(vector<Card>& A,int p,int r){
	if(p<r){
		int q = Partition(A,p,r);
		QuickSort(A,p,q-1);
		QuickSort(A,q+1,r);
	}
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N=in();
	vector<Card> C(N);
	REP(i,N){
		C[i].mark=in<char>();
		C[i].num=in();
		C[i].index=i;
	}
	
	QuickSort(C,0,N-1);
	map<int,int> check;
	bool is_stable=true;
	REP(i,N){
		if(check.find(C[i].num)==check.end()){
			check[C[i].num] = C[i].index;
		}
		else{
			if(check[C[i].num]>C[i].index){
				is_stable = false;
				break;
			}
		}
	}

	out(is_stable ? "Stable" : "Not stable");
	REP(i,N){
		out(C[i].mark,C[i].num);
	}
	return 0;
}

