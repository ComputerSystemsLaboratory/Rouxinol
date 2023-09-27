#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
#include<complex>
#include<string>
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

vector<string> v;

int main()
{
	int n,m;
	bool flag = true;
	
	cin >> n;
	
	REP(i,n)
	{
		string tmps;
		cin >> tmps;
		v.PB(tmps);
	}
	
	cin >> m;
	
	REP(i,m)
	{
		bool con = false;
		string tmp;
		cin >> tmp;
		
		REP(j,n)
		{
			if(v[j] == tmp)
			{
				if(flag)
				{
					cout << "Opened by " << tmp << endl;
					flag = !flag;
					con = true;
					break;
				}
				else
				{
					cout << "Closed by " << tmp << endl;
					flag = !flag;
					con = true;
					break;
				}
			}
		}
		
		if(!con)
			cout << "Unknown " << tmp << endl;
		
	}
			
	
	return 0;
}