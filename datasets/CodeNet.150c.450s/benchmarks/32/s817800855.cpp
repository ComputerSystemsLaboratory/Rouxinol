#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<complex>
#include<string>
#include<cstring>

using namespace std;
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
#define INF 100000000
#define all(x) x.begin(),x.end()
typedef pair<int,int> P;
typedef pair<int,P> PP;
int m,a,b;
int ans_sa;
int ans;
vector<int> stu;
int main()
{
	while(1)
	{
		stu.clear();
		int input;
		cin>>m>>a>>b;
		if(m==0)break;
		rep(i,m)
		{
			cin>>input;
			stu.push_back(input);
		}
		sort(all(stu),greater<int>());
		ans_sa=-1;
		for(int i=a-1;i<b;i++)
		{
			if(stu[i]-stu[i+1]>=ans_sa)
			{
				ans_sa=stu[i]-stu[i+1];
				ans=i+1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}