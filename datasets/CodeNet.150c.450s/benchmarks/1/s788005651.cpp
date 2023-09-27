#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>
#include <functional>
#include <map>
#include <set>
#include <cmath>
#include <string>
#define SIZE 200005
#define INF 1000000005LL

using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

int n;
ll K;
ll L[100005];

int main()
{
	int l=1;
	scanf("%d",&n);

	ll a;
	L[0]=-1;
	for(int i=0;i<n;i++){
		scanf("%lld",&a);
		*lower_bound(L+1,L+l,a) = a;
		if(a>L[l-1])l++;
	}
	printf("%d\n",l-1);
	return 0;
}

