//?????\?????????
#include <iostream>
using namespace std;

void disp(int n,int A[])
{
	for(int i = 0 ; i < n ; i++)
	{
		if(i > 0) cout << " ";
		cout << A[i];
	}
	cout << endl;
	return;
}

void insertionsort(int n,int A[])
{
	int v,j = 0;
	for(int i = 1 ; i < n ; i++)
	{
		v = A[i];
		j = i-1;
		while(j >= 0 && A[j] > v)
		{
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;
		disp(n,A);
	}
	return;
}

int main(void)
{
	int n;
	cin >> n;
	int A[n];
	for (int i = 0; i < n ; i++)
	{
		cin >> A[i];
	}
	disp(n,A);
	insertionsort(n,A);
	return 0;
}
	