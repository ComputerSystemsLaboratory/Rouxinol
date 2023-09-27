#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <utility>
#include <cstdio>
#include <cstring>

using namespace std;

#define REP(var, count) for(int var=0; var<count; var++)

int main(void) {
	while(true) {
		int W, H;
		scanf("%d %d", &W, &H);
		if ( W==0 ) { break; }
		
		char line[26][26];
		
		queue<pair<int, int> > que;
		
		strcpy(line[0], "#######################");
		strcpy(line[H+1], "#######################");
		
		for(int y=1; y<=H; y++) {
			line[y][0] = '#';
			scanf("%s", &line[y][1]);
			
			if ( char* p = strchr(line[y], '@') ) {
				que.push(make_pair(y, p - line[y]));
			}
		}
		
		int ret = 1;
		
		while(que.size()) {
			
			int y = que.front().first;
			int x = que.front().second;
			que.pop();
			
			int m[][2] = { {-1,0},{1,0},{0,1},{0,-1} };
			REP(d, 4) {
				if ( line[y+ m[d][0]] [x+ m[d][1]] == '.' ) {
					line[y+ m[d][0]] [x+ m[d][1]] = '+';
					ret++;
					que.push( make_pair(y+ m[d][0], x+ m[d][1]) );
				}
			}
		}
		
		cout << ret << endl;
	}
}