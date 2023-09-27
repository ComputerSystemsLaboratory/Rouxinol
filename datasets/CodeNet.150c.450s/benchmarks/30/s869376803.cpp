#include<cstdio>
#include<iostream>
 
using namespace std;

int selectionSort(int a[], int n)
{
	int cnt = 0;
	for(int i=0;i<n;++i)
	{
		bool flag = 0;
		int minIndex = i;
		for(int j=i;j<n;++j)
		{
			if(a[j]<a[minIndex])
			{
				minIndex = j;
				flag = 1;
			}
		}
		if(flag)
		{
			swap(a[i], a[minIndex]);
			cnt++;
		}
		
	}
	return cnt;
}
void solve()
{
	int a[105],n;
	cin >> n;
	for (int i = 0; i < n; ++i) cin >> a[i];
	int ans = selectionSort(a, n);
	for (int i = 0; i < n - 1; ++i) printf("%d ", a[i]);
	printf("%d\n", a[n - 1]);
	printf("%d\n", ans);
	
}
int main()
{
	solve();
	return 0;
}