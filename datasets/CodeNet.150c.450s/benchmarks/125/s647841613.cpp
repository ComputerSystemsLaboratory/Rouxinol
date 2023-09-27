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
typedef stack<int> SI;
typedef pair<int,int> PII;
typedef long long LL;

#define d(x)  cout<<#x<<" = "<<(x)<<endl;
#define c cout<<"#"<<endl;
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
//?????????????????????????????????
SI s;//?¨?????????????????????????
int n;//??????????????°
int t;//??????
int d[101];//??????????????????????¨????????????????????????????????????????
int f[102];//??????????????£??\?????????????????????????????????????????????????????????
int a[101][101];//??£??\?????????
int p[101];//??£??\?????????????¨???????????????????????????????
int flag;//???
int main()
{
	cin>>n;
	FOR(i,1,n+1)//??£??\??????????????????
	{
		int k,m;cin>>k>>m;
		a[k][0]=m;
		FOR(j,1,m+1)
		{
			int x;cin>>x;
			a[k][j]=x;
		}
	}
	d[1]=1;int o=1;
	FOR(i,1,101)p[i]=1;//??£??\??????????????????????????????????????????1???????????????
	for(s.push(o),t=2;;t++)
	{
		//s.top()?????????????????????????????????
		if(a[s.top()][0]==0)
		{
			f[s.top()]=t;
			s.pop();
		}
		else
		{
			int next=a[s.top()][p[s.top()]];//next????¬?????¨?????????????????????????
			for(;d[next]!=0;)//???????????????????¨??????????????????¢???
			{
				p[s.top()]++;//????????????????????????????¬??????????????????????
				if(p[s.top()]>a[s.top()][0])//?????????????????£????????????????????????????¨??????????????????°
				{
					f[s.top()]=t;
					s.pop();//?¬?????¨????????????????????????????
					flag=1;//???????????????
					break;//????????????????????????
				}
				next=a[s.top()][p[s.top()]];//?¨????????????????????????´??°
			}
			if(flag==0)//?????????????????£???????????????????¨??????????????????°
			{
				s.push(next);//?¬?????¨??????????for???????????§??????????????????
				d[s.top()]=t;//???????????????????????????????????????????¨????????????????????????????????????????
			}
		}
		flag=0;//???????????????
		if(f[o]!=0)
		{
			int i;
			for(i=o;f[i]!=0;i++);
			if(i>n)break;
			o=i;t++;
			s.push(o);
			d[o]=t;
		}
	}
	FOR(i,1,n+1)cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;
	return 0;
}