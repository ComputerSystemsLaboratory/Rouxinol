#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

#define REP(i,n) for(int i = 0;i < n;i++)
#define DBG cout << '!' << endl;	

bool is_p(int n)
{
	for(int i = 2;i * i <= n;i++)
	{
		if(n % i == 0)return false;
	}
	return n != 1;
}

int main()
{
	int a,d,n;
	while(cin >> a >> d >> n,a)
	{
		int _count = 0;
		if(is_p(a))_count++;
		while(_count != n)
		{
			a += d;
			if(is_p(a))_count++;
		}
		cout << a << endl;
	}
	
	return 0;
}