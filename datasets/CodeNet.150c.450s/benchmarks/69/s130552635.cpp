#include <iostream>
#include <ios>
#include <iomanip>
#include <functional>
#include <algorithm>
#include <vector>
#include <sstream>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <set>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <climits>
using namespace std;
#define XINF INT_MAX
#define INF 0x3FFFFFFF
#define MAXN 0x7fffffff
#define MP(X,Y) make_pair(X,Y)
#define PB(X) push_back(X)
#define PF(X) push_front(X)
#define REP(X,N) for(int X=0;X<N;X++)
#define REP2(X,L,R) for(int X=L;X<=R;X++)
#define DEP(X,R,L) for(int X=R;X>=L;X--)
#define CLR(A,X) memset(A,X,sizeof(A))
#define IT iterator
#define PI  3.14159265358979
typedef long long ll;
typedef pair<int,int> PII;
typedef priority_queue<int,vector<int>,greater<int> > PQI;
typedef vector<PII> VII;
typedef vector<int> VI;
#define X first
#define Y second

queue<int> *st;
stack<int> *LQ;
stack<int> *RQ;
VI v; 

void dfs(int x)
{
	int flag=0;
	if(LQ->empty() || (!LQ->empty() && x>LQ->top()))
	{
		LQ->push(x);
		flag=1;
	}
	if((RQ->empty() || (!RQ->empty() && x>RQ->top())) && !flag)
	{
		RQ->push(x);
		flag=1;
	}
	if(!flag)
		return ;
	st->pop();
	dfs(st->front());
}
	

int main()
{
	ios::sync_with_stdio(false);
	int T;
	cin>>T;
	while(T--)
	{
		queue<int> stemp;  st=&stemp;
		stack<int> LQtemp; LQ=&LQtemp;
		stack<int> RQtemp; RQ=&RQtemp;
		REP(i,10)
		{
			int x;
			cin>>x;
			st->push(x);
		}
		dfs(st->front());
		/*cout<<endl;
		while(!LQ->empty())
		{
			int x=LQ->top();
			cout<<x<<endl;
			LQ->pop();
		}
		cout<<endl;
		while(!RQ->empty())
		{
			int x=RQ->top();
			cout<<x<<endl;
			RQ->pop();
		}*/
		if(st->empty())
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}