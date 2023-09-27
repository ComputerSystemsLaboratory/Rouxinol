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
		int ans = 0;
		vector<string> v;
		REP(i,n)
		{
			string tmp;
			cin >> tmp;
			v.PB(tmp);
		}
		
		REP(i,n/2)
		{
			string s1,s2;
			if(v[2*i][0] != v[2*i + 1][0])ans++;
		}
		
		cout << ans << endl;
		
	}
			
	
	return 0;
}