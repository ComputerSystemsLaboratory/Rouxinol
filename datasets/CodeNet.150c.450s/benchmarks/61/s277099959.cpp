#include <iostream>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)

int main(){
	int N,A,B,C,X;
	while(cin>>N>>A>>B>>C>>X,N){
		int c=0;
		bool f=true;
		rep(i,N){
			int y;
			cin>>y;
			for(;;c++){
				if(c>10000){
					f=false;
					break;
				}
				if(X==y) break;
				X=(A*X+B)%C;
			}
			X=(A*X+B)%C;
			c++;			

		}
		if(f) cout<<c-1<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}