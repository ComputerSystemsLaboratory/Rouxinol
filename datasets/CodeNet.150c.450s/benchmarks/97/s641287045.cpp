#include<iostream>
#include<algorithm>
#include<utility>
#include<set>
#include<vector>
#define REP(i,n) for(int i = 0;i < n;i++)
#define mp make_pair
#define FI first
#define SE second
using namespace std;

typedef pair<int,int> ip;
typedef pair<int,ip> iip;
typedef vector<iip> iipv;

int dx[] = {-1,0,1,0},dy[]= {0,-1,0,1};
int n;
int a,b;
int xma,xmi,yma,ymi;

int main()
{
	for(;;)
	{
		cin >> n;
		if(n == 0)break;
		xma = yma = 0;
		xmi = ymi = 1e5;
		iipv p;
		p.push_back(mp(0,mp(0,0)));
		REP(i,n-1)
		{
			cin >> a >> b;
			p.push_back(mp(i+1,mp(p[a].SE.FI+dx[b],p[a].SE.SE+dy[b])));
		}
		
		//REP(i,n)
		//cout << p[i].FI << ' ' << p[i].SE.FI <<  ' ' << p[i].SE.SE << endl;
		
		REP(i,n)
		{
			xma = max(xma,p[i].SE.FI);
			xmi = min(xmi,p[i].SE.FI);
			yma = max(yma,p[i].SE.SE);
			ymi = min(ymi,p[i].SE.SE);
		}
		
		cout << xma - xmi + 1 << ' ' << yma - ymi + 1 << endl;
	}
	
	return 0;
}