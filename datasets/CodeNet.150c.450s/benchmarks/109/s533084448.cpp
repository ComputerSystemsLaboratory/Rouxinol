#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int to_sec(int h, int m, int s){
	return h*60*60 + m*60 + s;
}

int main(){
	int n;
	while( scanf("%d", &n ), n ){
		int H[60*60*24+1] = {0};
		
		for(int i=0 ; i < n ; i++ ){
			int h1, m1, s1, h2, m2, s2;
			scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2 );
			int t1 = to_sec( h1 , m1 , s1 );
			int t2 = to_sec( h2 , m2 , s2 );
			for(int t = t1 ; t < t2 ; t++ ){
				H[t]++;
			}
		}
		int ans = 0;
		for(int t=0 ; t < 60*60*24+1 ; t++ ){
			ans = max( ans , H[t] );
		}
		cout <<  ans << endl;
	}
}