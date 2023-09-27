#include<iostream>

using namespace std;
int main(){
	
	int N,A,B,C,X;
	int Y[10000];
	while(cin>>N>>A>>B>>C>>X){
		for(int i=0;i<N;i++)
			cin>>Y[i];
		
		int n=0;
		int j=0;
		for(int i=0;i<=10000;i++){
			if(Y[n]==X)
				n++;
			if(n==N){
				j=i;
				break;
			}
			X=(A*X+B)%C;
			
		}
		if(N!=0){
		if(n==N)
			cout<<j<<endl;
		else
			cout<<-1<<endl;
		}
	}
	
	
}