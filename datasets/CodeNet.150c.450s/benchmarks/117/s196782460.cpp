#include<bits/stdc++.h>
using namespace std;

int n, a[500005], l[500005], r[500005], inf = 1e9 + 1, s;
void merge( int x, int y ){
	if( x == y ) return;
	int c1 = (x + y) / 2;
	int c2 = ((x + y) / 2) + 1;
	
	merge( x, c1 );
	merge( c2 , y);
	
	for( int i = 0 ; i <= c1 - x ; i++ ) l[i] = a[i + x];
	for( int i = 0 ; i <= y - c2 ; i++ ) r[i] = a[i + c2];
	
	l[c1 - x + 1] = inf;
	r[y - c2 + 1] = inf;
	
	int k = x, l1 = 0, r1 = 0;
	
	for( int i = 0 ; i < y - x + 1 ; i++ ){
		a[k] = min( l[l1], r[r1]);
		k++;
		if( l[l1] > r[r1] ) r1++;
		else l1++;	
	}
	s += y - x + 1;	
	
}


int main(){
	
	cin >> n;
	for( int i = 0 ; i < n ; i++ ){
		cin >> a[i];
	}
	
	merge(0, n - 1);
	for( int i = 0 ; i < n ; i++ ){
		if( i != 0 ) cout << ' ';
		cout << a[i];
	}
	cout << "\n" << s << "\n";
	
}
