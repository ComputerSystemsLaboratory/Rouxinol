#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<cctype>
#include<cstring>
#include<utility>
const int inf=0x7fffffff;
typedef long long int ll;
using namespace std;
int main()
{
#ifdef DEBUG
	freopen("in", "r", stdin);
//	freopen("out", "w", stdout);
#endif
	int n;
	scanf("%d", &n);
	int _min=1000000;
	int _max=-_min;
	ll sum=0;
	int x=-1;
	while(n--){
		scanf("%d", &x);
		_min=min(x,_min);
		_max=max(x,_max);
		sum+=x;
	}
	printf("%d %d %lld\n", _min, _max, sum);
	
	//insert code
	return 0;
}
//aog1_4_d.cc