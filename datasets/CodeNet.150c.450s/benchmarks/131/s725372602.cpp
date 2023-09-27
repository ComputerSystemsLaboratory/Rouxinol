#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<functional>
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
typedef vector<iv> iiv;
typedef vector<string> sv;

int toint(iv v)
{
	int ret = 0;
	int x = 1;
	for(int i = v.size()-1;i >= 0;i--)
	{
		ret += v[i] * x;
		x *= 10;
	}
//	cout << ret << endl;
	return ret;
}

iv toiv(int n,int l)
{
	iv ret;
	REP(i,l)
	{
		ret.PB(n%10);
		n /= 10;
	}
//	SHOW1d(ret,ret.size());
	
	return ret;
	
}

int main()
{
	int a,l;
	
	while(cin >> a >> l,a|l)
	{
		int _list[21] = {};
		_list[0] = a;
		
		bool flag = false;

		
		REP(i,21)
		{
			iv tmp = toiv(_list[i],l);
			sort(ALL(tmp));
			int _min = toint(tmp);
			sort(ALL(tmp),greater<int>());
			int _max = toint(tmp);
			int lis = _max -_min;
			
	//		cout << _max << ' ' << _min << endl;
			
			REP(j,i+1)
			{
				if(_list[j] == lis)
				{
					cout << j << ' ' << _list[j] << ' ' << i - j + 1 << endl;
					flag = true;
				}
				if(flag)break;
			}
			
			_list[i+1] = lis;
			if(flag)break;
		}
		
		int listmp = _list[20],_cou = 21;
		
		while(1)
		{
			if(flag)break;
			iv tmp = toiv(listmp,l);
			sort(ALL(tmp));
			int _min = toint(tmp);
			sort(ALL(tmp),greater<int>());
			int _max = toint(tmp);
			int lis = _max -_min;
			REP(j,21)
			{
				if(_list[j] == lis)
				{
					cout << j << ' ' << _list[j] << ' ' << _cou - j + 1 << endl;
					flag = true;
				}
			}
			
			listmp = lis;
			_cou++;
		}	
		
		
		NEXT:;
		
	}
		
	
	return 0;
}