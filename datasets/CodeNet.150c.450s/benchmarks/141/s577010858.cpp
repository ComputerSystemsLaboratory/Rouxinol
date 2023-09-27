#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <complex>
#include <functional>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define dump(n) cout<<"# "<<#n<<"="<<(n)<<endl
#define debug(n) cout<<__FILE__<<","<<__LINE__<<": #"<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define tr(c,i) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int,int> pii;

double cross(double x1,double y1,double x2,double y2)
{
	return x1*y2-x2*y1;
}

int ccw(double x1,double y1,double x2,double y2,double x3,double y3)
{
	return cross(x2-x1,y2-y1,x3-x1,y3-y1)>0;
}

int main()
{
	//float x,y,a,b,n,m,p,q;
	//int i;
	//for(;~scanf("%f%f%f%f%f%f%f%f",&x,&y,&a,&b,&n,&m,&p,&q);puts(i>2^!i?"YES":"NO"))
	//	i=((p-x)*(b-y)>(q-y)*(a-x))+((p-a)*(m-b)>(q-b)*(n-a))+((p-n)*(y-m)>(q-m)*(x-n));
	
	for(double x,y,a,b,n,m,p,q;scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x,&y,&a,&b,&n,&m,&p,&q)==8;){
		int counter=0;
		counter+=(p-x)*(b-y)>(q-y)*(a-x);
		counter+=(p-a)*(m-b)>(q-b)*(n-a);
		counter+=(p-n)*(y-m)>(q-m)*(x-n);
		
		cout<<(counter%3==0?"YES":"NO")<<endl;
	}
	
	return 0;
}