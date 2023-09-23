#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>

#define ll long long
#define LL long long
#define ULL unsigned long long 
#define ull unsigned long long 
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define RFOR(i,a,b) for(int i=(b)-1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<n;i++)
#define RREP(i,n) for(int i=(n)-1;i>=0;i--)
#define int(x) int x;scanf("%d",&x);
#define double(x) double x;scanf("%lf",&x);
#define string(x) double string;cin>>x;

using namespace std;

int main()
{
	int num;
	int data[100]={};
	int ans;
/*	for (int j = 0; j < 100; j++) {
		data[j] = j;
	}*/
	int i=0;
	
	while (cin >> num)
	{
		data[num]++;
		i++;
	}
	int tmp = 0;
	//sort(num, num + i);
	for (int j = 0; j < i; j++) {
		if (data[j] > tmp)
		{
			ans = j;
			tmp = data[j];
		}
	}

	cout << ans << endl;

	for (int j = 0; j < i; j++) {
		if (data[ans]==data[j]&&j!=ans)
		{
			cout << j << endl;
		}
	}


	return 0;
}