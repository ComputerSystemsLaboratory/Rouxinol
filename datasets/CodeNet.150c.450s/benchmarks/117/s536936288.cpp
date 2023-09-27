#include <cstdio>
#include <iostream>
#include <limits>
using namespace std;

int s[500000];
int c = 0;
void merge(int left , int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;

	int *l = new int[n1 + 1];
	int *r = new int[n2 + 1];

	for (int i = 0; i < n1; i++)
	{
		l[i] = s[left + i];
	}

	for (int i = 0; i < n2; i++)
	{
		r[i] = s[mid + i];
	}

	l[n1] = numeric_limits<int>::max();
	r[n2] = numeric_limits<int>::max();

	int i = 0;
	int j = 0;

	for (int k = left; k < right; k++)
	{
		if (l[i] <= r[j])
		{
			s[k] = l[i];
			i++;
		}
		else
		{
			s[k] = r[j];
			j++;
		}
		c++;
	}
	delete[] l;
	delete[] r;

}

void mergeSort(int left,int right)
{
	int mid;

	if (left + 1 < right)
	{
		mid = (left + right) / 2;
		mergeSort(left,mid);
		mergeSort(mid,right);
		merge(left, mid, right);
	}
}
void B()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}


	mergeSort(0,n);
	for (int i = 0; i < n; i++)
	{
		cout << s[i];
		if (i != n - 1)
		{
			cout << " ";
		}
	}

	cout << endl;
	cout << c << endl;
}
int main()
{
	//A();
	B();
	return 0;
}