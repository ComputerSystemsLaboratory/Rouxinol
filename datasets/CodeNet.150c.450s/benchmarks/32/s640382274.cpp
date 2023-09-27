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
	int m,nmin,nmax;
	
	while(cin >> m >> nmin >> nmax,m)
	{
		int score[m];
		REP(i,m)
		{
			cin >> score[i];
		}
		
		int ans = 0,maxgap = 0;
		
		for(int i = nmin-1;i <= nmax-1;i++)
		{
			if(maxgap <= score[i] - score[i+1])
			{
				ans = i+1;
				maxgap = score[i] - score[i+1];
			}
		}
		
		cout << ans << endl;
		
	}
	
	
	return 0;
}