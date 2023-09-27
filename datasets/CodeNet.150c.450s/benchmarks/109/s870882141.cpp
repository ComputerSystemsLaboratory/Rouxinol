#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

typedef pair<int,int> P;

int main(){
	int n;
	while( scanf("%d", &n), n ){
		priority_queue<P, vector<P>, greater<P> > q;
		
		for(int i=0 ; i < n ; i++ ){
			int h1, m1, s1, h2, m2, s2;
			scanf("%d:%d:%d", &h1, &m1, &s1);
			scanf("%d:%d:%d", &h2, &m2, &s2);
			int t1 = h1 * 60 * 60 + m1 * 60 + s1;
			int t2 = h2 * 60 * 60 + m2 * 60 + s2;
			q.push( P(t1, +1) );
			q.push( P(t2, -1) );
		}
		int ans = 0, cnt = 0;
		while( !q.empty() ){
			P p = q.top(); q.pop();
			if( p.second == -1 ){
				cnt--;
			}else{
				cnt++;
				ans = max(ans, cnt);
			}
		}
		printf("%d\n", ans);
	}
}