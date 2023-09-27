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
#define SIZE 100005
#define INF 1000000005LL

using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

int n;
int k;
int T[SIZE];

bool check(int m){
	int cw = 0;
	int car=1;
	for(int i=0;i<n;i++){
		if(T[i]>m)return false;
		else if(T[i]+cw>m){
			cw = T[i];
			car++;
			if(car>k)return false;
		}else{
			cw += T[i];
		}
	}
	return true;
}

int main()
{
	scanf("%d %d",&n,&k);
	int r=0;
	for(int i=0;i<n;i++){
		scanf("%d",&T[i]);
		r+=T[i];
	}
	r++;
	int l=0,m;
	while(l+1<r){
		m=(l+r)/2;
		if(check(m))r=m;
		else l=m;
	}
	printf("%d\n",r);
	return 0;
}

