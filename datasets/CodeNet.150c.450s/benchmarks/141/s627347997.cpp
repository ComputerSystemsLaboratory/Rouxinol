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

//double cross(double x1,double y1,double x2,double y2)
//{
//	return x1*y2-x2*y1;
//}
#define cross(x1,y1,x2,y2) (x1)*(y2)-(x2)*(y1)

int ccw(double x1,double y1,double x2,double y2,double x3,double y3)
{
	return cross(x2-x1,y2-y1,x3-x1,y3-y1)>=0;
}

int main()
{
	for(double x,y,a,b,n,m,p,q;scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x,&y,&a,&b,&n,&m,&p,&q)==8;){
		int counter=0;
		//counter+=(p-x)*(b-y)-(q-y)*(a-x)>0;
		//counter+=(p-a)*(m-b)-(q-b)*(n-a)>0;
		//counter+=(p-n)*(y-m)-(q-m)*(x-n)>0;
		//counter+=cross(a-x,b-y,p-x,q-y)>=0;
		//counter+=cross(n-a,m-b,p-a,q-b)>=0;
		//counter+=cross(x-n,y-m,p-n,q-m)>=0;
		counter+=ccw(x,y,a,b,p,q);
		counter+=ccw(a,b,n,m,p,q);
		counter+=ccw(n,m,x,y,p,q);
		
		cout<<(counter%3==0?"YES":"NO")<<endl;
	}
	
	return 0;
}