#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
#include<complex>
#include<cstdlib>
#include<cctype>

#define REP(i,n) for(int i = 0;i < (n);i++)
#define PB push_back
#define MP make_pair
#define SHOW1d(v,n) {for(int i = 0;i < (n);i++)cout << v[i] << ' ';cout << endl << endl;}
#define SHOW2d(v,i,j) {for(int a = 0;a < i;a++){for(int b = 0;b < j;b++)cout << v[a][b] << ' ';cout << endl;}cout << endl;}
#define ALL(v) v.begin(),v.end()

using namespace std;

typedef long long ll;
typedef vector<int> iv;
typedef vector<iv> ivv;

int main()
{
	int n,a,b,c,x;
	
	while(cin >> n >> a >> b >> c >> x,n)
	{
		int target[n];
		
		REP(i,n)cin >> target[i];
		
		int _count = 0,ret = -1;
		while(_count != n)
		{
			ret++;
			if(x == target[_count])
			{
				_count++;
			}
			
			x = (a * x + b) % c;
			if(ret > 10000)break;
		}
		if(ret <= 10000)
			cout << ret << endl;
		else
			cout << -1 << endl;
		
	}
	
	return 0;
}