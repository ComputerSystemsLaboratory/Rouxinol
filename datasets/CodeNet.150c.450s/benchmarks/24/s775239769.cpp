#include<iostream>

using namespace std;

int main(){
	int N,M;
		
	while(cin>>N>>M,N||M){
		int Expected[11]={0};
		int sum=0;
		int p,d;
		
		for(int i=0;i<N;i++){
			cin>>d>>p;
			Expected[p]+=d;
		}
		
		for(int i=10;i>=0 && M>=0;i--){
			if(Expected[i]<=M){
				M-=Expected[i];
				Expected[i]=0;
			}
			else{
				Expected[i]-=M;
				M=0;
			}
		}
		
		for(int i=10;i>=0;i--){
			if(Expected[i]>0){
				sum+=Expected[i]*i;
			}
		}
		cout<<sum<<endl;
	}
}