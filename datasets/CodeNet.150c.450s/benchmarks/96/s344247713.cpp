#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;


#define REP(i,n) for(int i= 0;i < n;i++)
	
char mozi[][5] = {
	{'.',',','!','?',' '},
	{'a','b','c'},
	{'d','e','f'},
	{'g','h','i'},
	{'j','k','l'},
	{'m','n','o'},
	{'p','q','r','s'},
	{'t','u','v'},
	{'w','x','y','z'}};
int a[] = {5,3,3,3,3,3,4,3,4};

int c;
char buf;
string str;
int n;
	
int main()
{
	n = 0;
	cin >> n;
	REP(i,n)
	{
		cin >> str;
		REP(j,str.size())
		{
			buf = str[j];
			if(buf == '0')continue;
			c = 0;j++;
			while(str[j] != '0')
			{
				c++;j++;
			}
			cout << mozi[(buf - '0')-1][c%a[buf - '0'-1]] ;
		}
		
		cout << endl;
		
	}
	
	return 0;
}