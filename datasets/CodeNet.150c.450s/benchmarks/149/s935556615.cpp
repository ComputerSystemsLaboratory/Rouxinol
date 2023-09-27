#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <map>
#include <bitset>
#include <vector>
#include <queue>

typedef long long ll;

#define FOR(i,a,b)   for(ll i = (a); i < (b); i++ )
#define REP(i, n)    FOR(i,0,n)
#define fi first
#define se second


const ll mod = 1000000007;
//              123456789


using namespace std;
 

///////////////////////////////////////////////
//
//
///////////////////////////////////////////////

////////////////////////////////////////////////
////////////////////////////////////////////////

int g[11234];

int find( int key ){
	//cout<<key<<" "<<g[key]<<endl;
	if( g[key] < 0 ) return key;
	return g[key] = find( g[key] );
}

void unite( int x, int y ){
	x = find( x );
	y = find( y );
	if( x == y ) return;
	
	if( g[x] < g[y] ) swap( x, y );//????????°???x??????????°???????
	g[y] += g[x];
	g[x] = y;
}

int N;
int Q;
int p;
int a, b;

int main(){
	
	cin>>N>>Q;
	
	fill( g, g+N+1, -1 );
	
	REP( i, Q ){
		scanf("%d %d %d", &p, &a, &b);
		if( p ){
			if( find(a) == find(b) ) puts("1");
			else{				puts("0");}
		}
		else{
			unite( a, b );
			//cout<<g[a]<<" "<<g[b]<<"----"<<endl;
		}
	}
	
	return 0;

}