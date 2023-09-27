#include <bits/stdc++.h>

using namespace std;

const int M=26;

int arr[404];
int n;
int c[26];
int s[404][26];
int las[26];

long long calc()
{
	for(int i=0;i<M;i++) las[i]=0;
	long long ans=0;
	for(int i=0;i<n;i++)
	{
		las[arr[i]-1]=i+1;
		ans+=s[i][arr[i]-1];
		for(int j=0;j<M;j++)
			ans-=c[j]*(i+1-las[j]);
		cout << ans << endl;
	}
	return ans;
}

int main()
{
	cin >> n;
	for(int i=0;i<M;i++) cin >> c[i];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<M;j++) cin >> s[i][j];
	}
	
	for(int i=0;i<n;i++) cin >> arr[i];
	calc();
	//cout << calc() << endl;
}