#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> comb;

inline int first(int n){
	return ((1 << n) - 1);
}

int nextSet(int x){
	int small, ripple, newSmall,ones;
	
	small = x & -x;
	ripple = x + small;
	newSmall = ripple & -ripple;
	ones = (( newSmall / small ) >> 1) - 1;
	
	return (ripple | ones);
}

comb setComb(int s, int n){
	comb c;
	for(int i=1 ; i<=n ; i++){
		if( s & 1 ) c.push_back(i-1);
		s >>= 1;
	}
	return c;
}

int main(){
	int n=10, k, x, s, sum, ans;
	comb c;
	
	while( cin >> k >> s , k || s ){
		ans = 0;
		x = first(k);
		while( !(x & ~first(n) ) ){
			c = setComb( x , n );
			sum = 0;
			for(int i=0 ; i<c.size() ; i++){
				sum += c.at(i);
			}
			if( sum == s ) ans++;
			x = nextSet( x );
		}
		cout << ans << endl;
	}
}

