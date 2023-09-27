#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <map>
#include <set>
#define INF (2000000000)
#define MOD (1000000007)
using namespace std;

typedef vector<int> VI;
typedef vector<int>::iterator VII;
typedef vector<double> VD;
typedef vector<double>::iterator VDI;

int L;
map<int, int> maparray;

int maxi(int a)
{
	char s[16];
	sprintf(s, "%0*d", L, a);
	
	sort(s, s + L);
	reverse(s, s + L);
	
	int n;
	sscanf(s, "%d", &n);
	return (n);
}

int mini(int a)
{
	char s[16];
	sprintf(s, "%0*d", L, a);
	
	sort(s, s + L);
	
	int n;
	sscanf(s, "%d", &n);
	return (n);
}
	
int main()
{
	int a;
	while (scanf("%d %d", &a, &L), a + L){
		int i = 0;
		while (!maparray.count(a)){
			maparray.insert(make_pair(a, i++));
			
			a = maxi(a) - mini(a);
		}
		
		printf("%d %d %d\n", maparray[a], a, i - maparray[a]);
		
		maparray.clear();
	}
	
	return 0;
}