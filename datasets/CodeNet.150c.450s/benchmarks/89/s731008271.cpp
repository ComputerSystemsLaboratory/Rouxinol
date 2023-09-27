#include <iostream>
#include <vector>
#include <cstdio>
#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

const int MAX_N = 1000001;
bool prime[MAX_N];
vector<int> p;

void make_prime (void )
{
	fill (prime, prime+MAX_N, true );
	prime[0] = false;
	prime[1] = false;
	rep (i, MAX_N ){
		if (prime[i] ){
			for (int j = 2*i; j < MAX_N; j += i ){
				prime[j] = false;
			} // end for
		} // end if
	} // end rep

	p.clear();
	rep (i, MAX_N ){
		if (prime[i] ){
			p.push_back (i );
		} // end if
	} // end rep
}

int main()
{
	make_prime ();
	int a, d, n;
	while (scanf ("%d %d %d", &a, &d, &n ) && a && d && n ){
		int res = 0;
		int an = a;
		for (;;){
			if (prime[an] ){
				res++;
			} // end if
			if (res == n ) break;
			an += d;
		} // end for
		printf ("%d\n", an );
	} // end while
		
	return 0;
}