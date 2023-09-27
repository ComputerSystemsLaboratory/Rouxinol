#include <cstdio>
#include <map>
#include <vector>
using namespace std;

typedef long long LL;

void func(int n, map<int,int> &ret){
	vector<int> h(n + 1);
	int x;
	for(int i = 1; i <= n; ++i){
		scanf("%d", &x);
		h[i] = h[i-1] + x;
	}

	map<int,int> mp;
	for(int i = 0; i < n; ++i)
	for(int j = i + 1; j <= n; ++j){
		++mp[h[j] - h[i]];
	}
	
	ret.swap(mp);
}

int main(){
	int n, m;
	map<int,int>::iterator it1, it2;
	map<int,int> mp1, mp2;

	while( scanf("%d%d", &n, &m), n != 0 ){
		func(n, mp1);
		func(m, mp2);

		LL ans = 0;
		it1 = mp1.begin();
		it2 = mp2.begin();
		while(it1 != mp1.end() && it2 != mp2.end()){
			if(it1->first == it2->first){
				ans += (LL)it1->second * it2->second;
				++it1;
				++it2;
			}
			else if(it1->first < it2->first){
				++it1;
			}
			else{
				++it2;
			}
		}
		printf("%lld\n", ans);
	}
}