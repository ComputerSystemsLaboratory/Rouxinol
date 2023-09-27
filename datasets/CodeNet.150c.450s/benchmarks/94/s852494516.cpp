#include<iostream>
#include<algorithm>
using namespace std;
int a[105];

int bubble_sort(int a[], int n)
{
	bool flag = true;
	int cnt = 0;
	for(int i = n-1; i >= 0; i--)
	{
		flag = true;
		for(int j = 0; j < i; j++)
		{
			if(a[j+1] < a[j])
			{
				swap(a[j+1], a[j]);
				cnt++;
				flag = false;			
			}
		}
		if(flag)
		{
			for(int i = 0; i < n; i++)
			{
				if(i)
					cout << " ";
				cout << a[i];
			}
			cout << endl;
			return cnt;
		}
	}
}


int main ()
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << bubble_sort(a, n) << endl;
	return 0;
}
