#include "bits/stdc++.h"
using namespace std;

#define FOR( i, m, n )	for( int (i) = (m); (i) < (n); i++ )
#define REP( i, n )		FOR( i, 0, n )
#define ALL( x )		(x).begin(), (x).end()

struct P {
	string name;
	int t;
};

void enqueue( P a );
P dequeue();

int n;
int head = 0, tail;
vector<P> p;

int main() {
	int q; cin >> n >> q;
	tail = n;
	p.resize( n + 1 );

	REP( i, n ) cin >> p[i].name >> p[i].t;


	P tmp;
	int elapse = 0, c;
	while( head != tail ) {
		tmp = dequeue();
		c = min( tmp.t, q );
		tmp.t -= c;
		elapse += c;
		if( tmp.t > 0 ) enqueue( tmp );
		else			cout << tmp.name << " " << elapse << endl;
	}

}

P dequeue() {
	P x = p[head];
	head = ( head + 1 ) % ( n + 1);
	return x;
}

void enqueue( P a ) {
	p[tail] = a;
	tail = ( tail + 1 ) % ( n + 1 );
}
