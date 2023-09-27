#include<iostream>

using namespace std;

#define NMAX 100

int main(){

	long long N,A,B,C,X,Y[NMAX];

	while(1){
		cin>>N>>A>>B>>C>>X;
		if(N==0&&A==0&&B==0&&C==0&&X==0) break;
		int c=0;
		for(int i=0;i<N;i++){
			cin>>Y[i];
		}
		int ind=0;
		if(X==Y[0]) ind++;
		while(c<=10000&&ind<N){
			c++;
			X=(A*X+B) % C;
			if(X==Y[ind]) ind++;
		}
		if(c<=10000) cout<<c<<endl;
		else cout<<"-1"<<endl;
	}
}