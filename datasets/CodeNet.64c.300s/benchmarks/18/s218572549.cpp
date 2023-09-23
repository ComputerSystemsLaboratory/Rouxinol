#include<iostream>
using namespace std;
int Kannondou(int n){
	int dp[4] = {1,2,4,0};

	if(n<=3)
		return 1;

	for(int i = 3; i < n; ++i){
		dp[ 3 ] = dp[ 2 ] + dp[ 1 ] + dp[ 0 ];
		dp[ 0 ] = dp[ 1 ];
		dp[ 1 ] = dp[ 2 ];
		dp[ 2 ] = dp[ 3 ];
	}
	return ( dp[ 3 ] - 1 ) / 3650 + 1;
}
int main(){
	while(true){
		int n;

		cin>>n;
		if(n == 0)
			break;

		cout << Kannondou( n ) << endl;
	}
	return 0;
}