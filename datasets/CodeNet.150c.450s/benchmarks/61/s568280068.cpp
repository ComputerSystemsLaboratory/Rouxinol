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

int randset(int A,int B,int C,int X)
{
	return (A*X+B)%C;
}

int main()
{
	int N,A,B,C,X;
	while(cin >> N >> A >> B >> C >> X && N)
	{
		int Y[100000]={};
		int count=0;
		int i=1;

		rep(i,N)cin >> Y[i];

		for(i=1;i<=10001;i++)
		{
			if(X==Y[count])count++;
			
			if(count==N)break;
			else X=randset(A,B,C,X);
		}
		if( i>=10001 && count!=N )i=0;
		cout << i-1 << endl;
	}
	return 0;
}