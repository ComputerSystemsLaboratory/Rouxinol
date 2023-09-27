#include <iostream>
using namespace std;

int n,a,b,c;

int next(int x){
	return ( (a*x+b) % c );
}

int main(){
	int x;
	
	while( cin >> n >> a >> b >> c >> x , n||a||b||c||x ){
		int y[101] = {0};
		int cnt=0;
		
		for(int i=0 ; i<n ; i++ ){
			cin >> y[i];
		}
		for(int i=0 ; cnt <= 10000 && i < n ; ){
			if( y[i] == x ){
				i++;
				if( i == n ) break;
			}
			x = next(x);
			cnt++;
		}
		cout << ( (cnt>10000)? -1 : cnt ) << endl;
	}
}