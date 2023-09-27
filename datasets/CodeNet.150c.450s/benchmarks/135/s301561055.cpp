#include <stdio.h>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <algorithm>
#include <functional>

#define rep(i, n) for(int i=0; i<(int)(n); i++)
using namespace std;

int main()
{
	int h[1500], w[1500];
	int sh[1500], sw[1500];
	for(;;) {
		map<int, int> mh;
		map<int, int> mw;
		int N, M;
		scanf("%d%d", &N, &M);
		if(N==0 && M==0) return 0;
		rep(i, N) scanf("%d", h+i);
		rep(i, M) scanf("%d", w+i);
		rep(i, N) {
			int s=0;
			rep(j, i+1) s += h[j];
			sh[i] = s;
		}
		rep(i, M) {
			int s=0;
			rep(j, i+1) s += w[j];
			sw[i] = s;
		}
		rep(i, N) {
			if(mh.find(sh[i])!=mh.end()) mh[sh[i]]++;
			else mh.insert(make_pair(sh[i], 1));
			rep(j, i) {
				int s = sh[i]-sh[j];
				if(mh.find(s)!=mh.end()) mh[s]++;
				else mh.insert(make_pair(s, 1));
			}
		}
		rep(i, M) {
			if(mw.find(sw[i])!=mw.end()) mw[i]++;
			else mw.insert(make_pair(sw[i], 1));
			rep(j, i) {
				int s = sw[i]-sw[j];
				if(mw.find(s)!=mw.end()) mw[s]++;
				else mw.insert(make_pair(s, 1));
			}
		}
		int c=0;
		for(map<int, int>::iterator it=mh.begin(); it!=mh.end(); it++) {
			if(mw.find(it->first)!=mw.end()) c += it->second*mw[it->first];
		}
		printf("%d\n", c);
	}
}