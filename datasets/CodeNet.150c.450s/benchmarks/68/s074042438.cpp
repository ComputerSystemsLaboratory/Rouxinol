#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
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
	int n;
	
	while(cin >> n,n)
	{
		iv v;
		REP(i,n)
		{
			int tmp;
			cin >> tmp;
			v.PB(tmp);
		}
		
		sort(ALL(v));
		
		int ans = 1e9;
		
		REP(i,n-1)
		{
			ans = min(ans , v[i+1] - v[i]);
		}
		
		cout << ans << endl;
		
	}
	
	
	
	return 0;
}