#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <map>
#include <bitset>
#include <vector>
#include <queue>

using namespace std;

typedef long long ll;
#define FOR(i,a,b)   for(ll i = (a); i < (b); i++ )
#define REP(i, n)    FOR(i,0,n)
typedef pair< int, int >   cp2;
typedef pair< int, cp2 >   cp3;
#define fi first
#define se second
#define sec  se.fi
#define thr  se.se
const ll mod = 1000000007;
//              123456789


 

///////////////////////////////////////////////
//
//
///////////////////////////////////////////////

////////////////////////////////////////////////
////////////////////////////////////////////////



priority_queue< cp3, vector<cp3>, greater<cp3> >p;
cp3 now;

int g[112];

int find( int key ){
	//cout<<key<<" "<<g[key]<<endl;
	if( g[key] < 0 ) return key;
	return g[key] = find( g[key] );
}

void unite( int x, int y ){
	x = find( x );
	y = find( y );
	if( x == y ) return;
	
	if( g[x] < g[y] ) swap( x, y );
	if( g[x] == g[y] ) g[y]--;//??±??????x???????????????
	//g[y] += g[x];		 //????????°???x??????????°???????
	g[x] = y;
}

int a[112][112];
int N;
int ans = 0;

int main(){
	
	cin>>N;
	
	fill( g, g+112, -1 );
	
	
	REP( i, N ){
		REP( j, N ){
			scanf("%d",&a[i][j]);
			if( a[i][j] != -1 ){
				p.push( cp3( a[i][j], cp2(i, j) ) );
				//printf("%d %d %d\n",p[idx].fi, p[idx].sec, p[idx].thr);
				
			}
		}
	}
	
	while( !p.empty() ){
		now = p.top();
		p.pop();
		
		if( find(now.sec) != find(now.thr) ){
			unite( now.sec, now.thr );
			ans += now.fi;
		}
	}
	
	cout<<ans<<endl;
	
	return 0;

}