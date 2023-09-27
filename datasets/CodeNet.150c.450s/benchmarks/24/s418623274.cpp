#include<iostream>
#include<algorithm>

using namespace std;

#define NMAX 10000

typedef struct s{
	long long D;
	long long P;
} S;

bool operator<(S a,S b){
	return a.P>b.P;
}


int main(){

	long long N,M;
	S sp[NMAX];

	while(1){
		cin>>N>>M;
		int Dsum=0;
		if(N==0&&M==0) break;
		for(int i=0;i<N;i++){
			cin>>sp[i].D>>sp[i].P;
			Dsum+=sp[i].D;
		}
		if(Dsum<=M){
			cout<<"0"<<endl;
			continue;
		}
		sort(sp,sp+N);
		for(int i=0;i<N;i++){
			if(sp[i].D<=M){
				M-=sp[i].D;
				sp[i].D=0;
			}
			else{
				sp[i].D-=M;
				M=0;
				break;
			}
		}
		long long ans=0;
		for(int i=0;i<N;i++){
			ans+=sp[i].D*sp[i].P;
		}
		cout<<ans<<endl;
	}
}