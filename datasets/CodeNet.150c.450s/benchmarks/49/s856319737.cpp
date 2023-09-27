#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <bitset>
#include <map>
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
#define REP(i,n) for (int i=(n)-1;i>=0;i--)
#define reps(i,f,n) for(int i=(f);i<(n);i++)
#define REPS(i,f,n) for (int i=(f)-1;i>=(n);i--)
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};

void slove(int s){
	vint v(s);
	rep(i, s) scanf("%d", &v[i]);

	sort(all(v));
	ll sum = 0;
	for (int i = 1; i < s - 1; ++i)
	{
		sum += v[i];
	}
	
	printf("%lld\n", sum / (s - 2));
	return;
}

int main(void){

	int s;
	cin >> s;
	while(s != 0){
		slove(s);//???????????°
		cin >> s;
	}

	return 0;
}