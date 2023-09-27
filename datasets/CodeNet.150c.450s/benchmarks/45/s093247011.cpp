#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <list>
#include <utility>
#include <cmath>
#include <sstream>
#include <map>
#define F first
#define S second
#define FOR(i,n) for(int i=0;i<(int)n;i++)
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define FORI(i,k,n) for(int i=k;i<(int)n;i++)
#define repp(i,k,n) for(int i=k;i<(int)n;i++)
using namespace std;
typedef pair<double, double> pdd;
typedef pair<int, int> pii;
typedef pair< int , pair<int, int> > pip;
typedef unsigned long long ull;
const double EPS = 10e-6;
const int MMM=1000000007;

ull pow(ull m,ull n)
{
	if(n==0)return 1;
	if(n%2==1)return pow(m*m%MMM,n/2)*m%MMM;
	return pow(m*m%MMM,n/2)%MMM;
}
int main()
{
	ull n,m;
	cin>>m>>n;
	cout<<pow(m,n)%MMM<<endl;
}