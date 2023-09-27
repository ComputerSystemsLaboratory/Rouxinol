#include <bits/stdc++.h>
using namespace std;
#define modulo 1000000007
#define mod(mod_x) ((((long long)mod_x+modulo))%modulo)
#define Inf 100000000000000000

vector<long long> func(vector<long long> A){
	int last = 0;
	for(long long i=60;i>=0;i--){
		int ind = -1;
		for(int j=last;j<A.size();j++){
			if((A[j]>>i) & 1LL){
				ind = j;
				break;
				swap(A[j],A[last]);
				ind = last;
				last++;
				break;
			}
		}
		if(ind==-1)continue;
		for(int j=0;j<A.size();j++){
			if(j!=ind){
				if((A[j]>>i)&1LL){
					A[j] ^= A[ind];
				}
			}
		}
		swap(A[last],A[ind]);
		last++;
	}
	while(A.back()==0)A.pop_back();
	return A;
}

bool check(vector<long long> &X,long long Y){
	for(int i=0;i<X.size();i++){
		for(long long j=60;j>=0;j--){
			if((X[i]>>j)&1){
				if((Y>>j)&1){
					Y ^= X[i];
				}
				break;
			}
		}
	}
	return (Y==0);
}

bool check(vector<long long> &X,vector<long long> &Y){
	
	for(int i=0;i<Y.size();i++){
		if(!check(X,Y[i]))return false;
	}
	
	return true;
}

int main(){
	
	int t;
	cin>>t;
	
	for(int _=0;_<t;_++){
		int N;
		cin>>N;
		
		vector<long long> A(N);
		for(int i=0;i<N;i++)cin>>A[i];
		
		string S;
		cin>>S;
		
		vector<long long> X,Y;
		bool f = true;
		for(int i=N-1;i>=0;i--){
			if(S[i]=='0'){
				X.push_back(A[i]);
				X = func(X);
			}
			else{
				Y.push_back(A[i]);
				Y = func(Y);
				if(!check(X,Y)){
					f=false;
					break;
				}
			}
		}
		if(f)cout<<0<<endl;
		else cout<<1<<endl;
		
	}
	
	return 0;
}