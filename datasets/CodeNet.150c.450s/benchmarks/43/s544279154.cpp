#include <iostream>
using namespace std;

int main(){
	int n;
	while( cin >> n , n ){
		int x=0,y=0;
		for(int i=0 ; i<n ; ++i ){
			int a,b;
			cin >> a >> b;
			if( a == b )
				x += a, y += b;
			else
				((a>b)? x : y ) += a+b;
		}
		cout << x << " " << y << endl;
	}
}