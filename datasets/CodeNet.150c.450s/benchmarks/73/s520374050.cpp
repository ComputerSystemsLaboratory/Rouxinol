#include <iostream>
#include <vector>
using namespace std;
//
struct BIT{
	//
	int n;
	vector<int> dat;
	//
	BIT(int n_){
		init(n_);
	}
	//
	void init(int n_){
		n=n_;
		dat=vector<int>(n+1,0);
	}
	//
	void add(int k,int a){
		k++;
		while(k<=n){
			dat[k]+=a;
			k+=k&-k;
		}
	}
	//
	int query(int k){
		k++;
		int res=0;
		while(k){
			res+=dat[k];
			k-=k&-k;
		}
		return res;
	}
};
//
int main(){
	int N,Q;
	cin>>N>>Q;
	BIT bit(N);
	while(Q--){
		int C,X,Y;
		cin>>C>>X>>Y;
		if(C==1){
			cout<<bit.query(Y-1)-bit.query(X-2)<<endl;
		}else{
			bit.add(X-1,Y);
		}
	}
	return 0;
}
