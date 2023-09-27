#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <stack>

#define rep(i,x) for(int i=0;i<x;i++)
#define rrep(i,x) for(int i=x-1;i>=0;i--)
#define rep_to(a,i,x) for(int i=a;i<x;i++)

using namespace std;

int main()
{
	int n;
	cin >> n;

	char set[10][10]={
		".,!?_",
		"abc",
		"def",
		"ghi",
		"jkl",
		"mno",
		"pqrs",
		"tuv",
		"wxyz",
	};


	rep(i,n)
	{
		string str;
		int keep=0;
		int num[100]={};

		cin >> str;

		rep(j,str.length())
		{
			if(str[j]=='0')
			{
				if( keep-1==0 && (num[keep]-1)%5==4 )cout<<" ";
				else if(num[keep]>=1)cout << set[keep-1][(num[keep]-1)%strlen(set[keep-1])];
				num[keep]=0;
				/*cout << num[keep] <<endl;*/
			}
			else 
			{
				keep=str[j] - '0';
				num[keep]++;
			}
			str[j]=0;
		}
		cout << endl;
	}
	return 0;
}