#include <cstdio>
#include <map>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
	int a, L;
	char buf[32] = "";

	while(scanf("%d%d", &a, &L), L){
		map<int,int> mp;
		mp[a] = 0;

		int i;
		for(i = 1; ; ++i){
			sprintf(buf, "%0*d", L, a);
			sort(buf, buf + L);
			int x = strtol(buf, 0, 10);
			reverse(buf, buf + L);
			int y = strtol(buf, 0, 10);
			a = y - x;

			if(!mp.insert(make_pair(a, i)).second){
				break;
			}
		}

		int j = mp[a];
		printf("%d %d %d\n", j, a, i - j);
	}
}