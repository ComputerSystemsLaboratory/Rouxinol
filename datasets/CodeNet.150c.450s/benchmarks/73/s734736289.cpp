#include <iostream>
#include <vector>
using namespace std;
//
struct BIT{
	//
	int n;
	vector<long long> dat;
	//
	BIT(int n_){
		init(n_);
	}
	//
	void init(int n_){
		n=n_;
		dat=vector<long long>(n+1,0);
	}
	//
	void add(int k,int a){
		k++;
		while(k<=n){
			dat[k]+=a;
			k+=k&-k;
		}
	}
	//[0,k]
	long long query(int k){
		k++;
		long long res=0;
		while(k){
			res+=dat[k];
			k-=k&-k;
		}
		return res;
	}
	//
};
//
int main(){
	int N,Q;
	cin>>N>>Q;
	BIT bit(N);
	while(Q--){
		int C;
		cin>>C;
		if(C==1){
			int X,Y;
			cin>>X>>Y;
			X--;Y--;
			cout<<bit.query(Y)-bit.query(X-1)<<endl;
		}else{
			int K,A;
			cin>>K>>A;
			K--;
			bit.add(K,A);
		}
	}
	return 0;
}
