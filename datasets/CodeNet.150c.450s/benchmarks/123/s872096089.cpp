#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,x;
	cin >> n;
	int count=0;
	for( int i=1 ; i<=n ; i++ ){
		cin >> x;
		int counter=0;
		if( x%2==0 && x!=2 )continue;
		for( int j=1 ; j<=sqrt(x) ; j++ ){
			if( x%j == 0 )
				counter++;
		}
		if( counter==1 )
			count++;
	}
	cout << count << endl;
}