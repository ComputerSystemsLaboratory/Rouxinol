#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,p;
	while(cin>>n>>p,n+p)
	{
		int a[n];
		for (int i = 0; i < n; ++i) a[i]=0;
		int turn=0,s=p;
		while(1)
		{
			if(s>0)
			{
				++a[turn],--s;
				if(a[turn]==p) break;
				++turn;
				if(turn==n) turn=0;
			}
			else
			{
				if(a[turn]>0) s=a[turn],a[turn]=0;
				++turn;
				if(turn==n) turn=0;
			}
		}
		cout<<turn<<endl;
	}
	return 0;
}

