#include<iostream>
using namespace std;
int main(){
	int N,M,P;
	while(cin>>N>>M>>P){
		if(N==0)break;
		int c=0;
		int d[1100]={},cn=0;
		for(int i=1;i<=N;i++){
			cin>>c;
			d[i]=c;
			cn+=c;
		}
		if(d[M]==0){
			cout<<0<<endl;
		}
		else{
			cout<<((cn*(100-P))-((cn*(100-P))%d[M]))/d[M]<<endl;
		}
	}
	return 0;
}