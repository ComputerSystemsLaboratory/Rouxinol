#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int N,P,R,P2,P3[100],A;
	R=0;
	while(true){
		cin>>N>>P;
		P2=P;
		A=0;
		memset(P3,0,sizeof(P3));
		if(N==0 && P==0){
			break;
		}
		while(true){
			for(int i=0;i<N;i++){
				if(P3[i]==P){
					R=i;
					goto Exit;
				}
			}
			if(P2==0){
				P2=P3[A%N];
				P3[A%N]=0;
			}
			else{
				P2 -= 1;
				P3[A%N] += 1;
			}
			A++;
		}
		Exit:
		cout<<R<<endl;
	}
	return 0;
}