#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<vector>
#include<queue>
#include<stack>
#include<cmath>
#include<list>
#include<map>
#include<set>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int,int> PII;
typedef long long LL;

#define d(x)  cout<<#x<<" = "<<(x)<<endl;
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define REACH(i,c) for(typeof((c).rbegin()) i=(c).rbegin(); i!=(c).rend(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c,n) sort(c,c+n)
#define VSORT(c) sort((c).begin(),(c).end())
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define DFOR(i,b,a) for(int i=(b)-1;i>=(a);--i)
#define DREP(i,n) DFOR(i,n,0)
#define INF 2000000000

const double EPS = 1e-10;
const double PI  = acos(-1.0);
////////////////////////////////////////////////
int a[2000010],n;


void maxheapify(int a[],int i)
{
	int l=i*2;
	int r=l+1;
	int lgt;
	if(l<=n&&a[l]>a[i])
	{
		lgt=l;
	}
	else lgt=i;
	if(r<=n&&a[r]>a[lgt])
	{
		lgt=r;
	}
	if(lgt!=i)
	{
		swap(a[i],a[lgt]);
		maxheapify(a,lgt);
	}
}
 
void buildmaxheap(int a[])
{
	DFOR(i,n/2+1,1)maxheapify(a,i);
}

int parent(int i)
{
	return floor(i/2);
}

void heapIncreasekey(int a[],int i,int key)
{
	if(key<a[i])return;
	a[i]=key;
	while(i>1&&a[parent(i)]<a[i])
	{
		swap(a[i],a[parent(i)]);
		i=parent(i);
	}
}

void insert(int key)
{
	n++;
	a[n]=-INF;
	heapIncreasekey(a,n,key);
}

int heapExtractMax(int a[])
{
	if(n<1)return -1;
	
	int max=a[1];
	a[1]=a[n];
	n--;maxheapify(a,1);
	return max;
}

int main()
{
	string com;
	int x;
	for(;;)
	{
		cin>>com;
		if(com=="insert")
		{
			cin>>x;
			insert(x);
		}
		else if(com=="extract")
		{
			cout<<heapExtractMax(a)<<endl;
		}
		else if(com=="end")
		{
			break;
		}
	}
	return 0;
}