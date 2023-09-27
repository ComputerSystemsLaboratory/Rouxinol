#include<algorithm>
#include<functional>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<sstream>
#include<iostream>
#include<iomanip>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<bitset>

#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second

typedef unsigned long long ull;
typedef long long ll;

const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

using namespace std;

typedef pair<int ,int > P;

int a1,a2,a3,a4;
int b1,b2,b3,b4;
vector<int> a,b;

int main()
{
	while(cin>>a1>>a2>>a3>>a4>>b1>>b2>>b3>>b4)
	{
		int hit=0,blow=0;
		if(a1==b1)
			hit++;
		if(a2==b2)
			hit++;
		if(a3==b3)
			hit++;
		if(a4==b4)
			hit++;
		
		if(a1==b2||a1==b3||a1==b4)
			blow++;
		if(a2==b1||a2==b3||a2==b4)
			blow++;
		if(a3==b2||a3==b1||a3==b4)
			blow++;
		if(a4==b2||a4==b3||a4==b1)
			blow++;

		cout<<hit<<" "<<blow<<endl;
	}
	


	return 0;
}