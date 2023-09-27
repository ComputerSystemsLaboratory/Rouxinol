#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long long sum[20];
	int j=0;
	while(true){
		int n;
		cin >> n;
		if(n==0)break;
		int s[n];
		sum[j] = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>s[i];
			sum[j]+=s[i];
		}
		sort(s,s+n);
		sum[j] -= s[0]+s[n-1];
		sum[j] = sum[j]/(n-2);
		j++;
	}
	for (int i = 0; i < j; ++i)
	{
		cout << sum[i] <<endl;
	}
	return 0;
}