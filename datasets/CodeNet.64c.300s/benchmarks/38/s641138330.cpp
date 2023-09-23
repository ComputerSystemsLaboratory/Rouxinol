#include <iostream>
using namespace std;

int main()
{
	int n,A,B,f,ball;
	cin >> n;
	
	for(int i=0;i<n;i++){
		A=0;
		B=0;
		f=0;
		for(int j=0;j<10;j++){
			cin >> ball;
			if(ball<A && ball<B) f=1;
			else if(A<ball && ball<B) A=ball;
			else if(ball<A && B<ball) B=ball;
			else if(A<B) B=ball;
			else A=ball;
		}
		
		if(f==0) cout << "YES" << endl;
		else cout << "NO" << endl;
		
	}
}