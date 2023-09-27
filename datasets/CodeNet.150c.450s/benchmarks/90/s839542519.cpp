#include<stdio.h>
#include<string.h>
#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<queue>
#include<ctype.h>
#include<math.h>
#include<map>
#include<time.h>
#include<algorithm>
using namespace std;
const int N=100+1;
map<int,int> a;
typedef pair<int,int> PAIR;
bool cmp(const PAIR& left,const PAIR& right)
{
	return left.second==right.second?left.first<right.first:left.second>right.second;
}
int main()
{
	int n;
	while(~scanf("%d",&n))
		a[n]++;
	vector<PAIR> v(a.begin(),a.end());
	sort(v.begin(),v.end(),cmp);
	int max=v[0].second;
	for(int i=0;i!=v.size();i++)
		if(v[i].second==max)
			printf("%d\n",v[i].first);
		else break;
	return 0;
}
