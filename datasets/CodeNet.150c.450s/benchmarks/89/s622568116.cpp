#include <bits/stdc++.h>
#define REP(i,n,N) for(int i=n;i<N;i++)
#define p(S) cout<<S<<endl
using namespace std;

bool dprime[1000000]={false};
void dPrime(){
	dprime[1]=true;
	for(int i=2;i*i<1000000;i++){
		if(!dprime[i]){
			for(int j=2*i;j<1000000;j+=i){
				dprime[j]=true;
			}
		}
	}

	return;
}

int main(){
	dPrime();
	int n,a,d;
	while(cin>>a>>d>>n&&a&&d&&n){
		int count=0;
		for(int i=a;;i+=d){
			if(!dprime[i]) count++;
			if(count==n){
				p(i);
				break;
			}
		}
	}
	return 0;
}