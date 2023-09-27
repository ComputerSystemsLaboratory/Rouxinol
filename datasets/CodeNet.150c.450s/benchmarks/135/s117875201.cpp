#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
typedef long long ll;
typedef pair<int,int> pint;
typedef vector<int> vint;
typedef vector<pint> vpint;
#define mp make_pair
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define reps(i,f,n) for(int i=(f);i<(n);i++)

void slove(int n, int m){
	vint tmph(1501);
	vint h(1500001);//?????±?????????????????????
	vint tmpw(1501);
	vint w(1500001);

	//??\???
	rep(i, n) scanf("%d", &tmph[i]);
	rep(i, m) scanf("%d", &tmpw[i]);

	for (int i = 0; i < n; ++i){
		int len = 0;
		for (int j = i; j < n; ++j){
			len += tmph[j];
			h[len]++;
		}
	}

	for (int i = 0; i < m; ++i){
		int len = 0;
		for (int j = i; j < m; ++j){
			len += tmpw[j];
			w[len]++;
		}
	}

	ll sum = 0;
	rep(i, 1500001){
		sum += h[i] * w[i];
	}

	printf("%lld\n", sum);
	return;
}

int main(void){
	int n, m;
	while(1){
		scanf("%d %d", &n, &m);
		if(n == 0) break;
		slove(n, m);
	}
	return 0;
}