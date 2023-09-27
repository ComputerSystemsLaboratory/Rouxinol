#include<cstdio>
#include<map>
#include<queue>
#include<functional>
using namespace std;
typedef pair<int,int>P;
int main()
{
	int n,h,m,s,r;
	P p;
	while(scanf("%d",&n),n)
	{
		priority_queue<P,vector<P>,greater<P> >q1,q2;
		while(n--)
		{
			scanf("%d:%d:%d",&h,&m,&s);
			p.first=(h*60+m)*60+s;
			scanf("%d:%d:%d",&h,&m,&s);
			p.second=h*3600+m*60+s;
			q1.push(p);
		}
		r=0;
#define F p=q1.top(),q1.pop(),q2.push(P(p.second,p.first))
		while(q1.size()||q2.size())
		{
			if(q1.size()&&q2.size())
			{
				if(q1.top().first<q2.top().first)
					F;
				else q2.pop();
			}
			else if(q1.size())F;
			else break;
			s=q2.size();
			r=(r>s?r:s);
		}
		printf("%d\n",r);
	}
	return 0;
}