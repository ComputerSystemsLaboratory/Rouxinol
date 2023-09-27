#include <iostream>
#include <vector>
using namespace std;

int main(){
	long long N,K;
	cin>>N>>K;
	vector<long> A(N+1);
	for(int i=1;i<=N;i++) {cin>>A[i];}
	vector<long> score(N+1);

	for(int i=1;i<=N-K;i++){
		if(A[i]<A[K+i]){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}

}
