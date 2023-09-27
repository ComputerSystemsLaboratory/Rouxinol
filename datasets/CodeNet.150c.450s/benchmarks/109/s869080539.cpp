#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n;
	const int t = 86400;
	
	while( scanf("%d",&n) , n ){
		int table[t] = {};
		for(int i=0 ; i<n ; ++i ){
			int h1,m1,s1,h2,m2,s2,start,end;
			scanf("%d:%d:%d %d:%d:%d", &h1 , &m1 , &s1 , &h2 , &m2 , &s2 );
			start = s1 + m1*60 + h1*60*60 + 1;
			end   = s2 + m2*60 + h2*60*60;
			for(int j = start ; j <= end ; ++j ){
				table[j]++;
			}
		}
		int ans = 0;
		for(int i=0 ; i<t ; ++i ){
			ans = max( ans , table[i] );
		}
		printf("%d\n", ans );
		
	}
}