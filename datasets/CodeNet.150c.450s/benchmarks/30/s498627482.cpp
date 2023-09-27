#include<iostream>
#include<algorithm>
using namespace std;
int a[105];
void selection_sort(int a[], int n)
{
	int cnt = 0, i, j, mini;
	bool flag = false;
	for(i = 0; i < n; i++)
	{
		flag= false;
		mini = i;
		for(j = i+1; j < n; j++)
		{
			if(a[j] < a[mini])
			{
				mini = j;
				flag = true;
			}
		}
		if(flag)
		{
			swap(a[i], a[mini]);
			cnt++;
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(i)
			cout << " ";
		cout << a[i];
	}
	cout << endl;
	cout << cnt << endl;
}

int main ()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> a[i];
	selection_sort(a, n);
	return 0;
} 
