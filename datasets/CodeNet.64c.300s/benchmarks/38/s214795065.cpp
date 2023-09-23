#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int N,ball,B=0,C=0;
	bool failure;
	cin>>N;
	for(int i=0;i<N;i++){
		failure=0;
		for(int j=0;j<10;j++){
			cin>>ball;
			if(ball<B && ball<C){failure=1;}
			if(B<ball && C<B){B=ball;}
			else if(C<ball && B<C){C=ball;}
			else if(C<B){C=ball;}
			else 		{B=ball;}
		}	
		if(failure) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
		B=C=failure=0;
	}
	return 0;
}