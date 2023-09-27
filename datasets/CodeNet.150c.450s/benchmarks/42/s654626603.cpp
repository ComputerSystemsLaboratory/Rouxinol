#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<sstream>
#include<utility>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<set>
using namespace std;
typedef long long ll;
typedef pair<string,int>P;
queue<P>O;
int N,Q,t,st=0;
string n;
int main()
{
	scanf("%d%d",&N,&Q);
	for(int i=0;i<N;i++)
	{
		
		cin>>n>>t;
		O.push(make_pair(n,t));
	}
	for(;!O.empty();)
	{
		P tmp=O.front();O.pop();
		st+=min(tmp.second,Q);
		if(tmp.second<=Q)
			cout<<tmp.first<<" "<<st<<endl;
		else
		{
			tmp.second-=Q;
			O.push(tmp);
		}
	}
}