#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

const int INF = 1000000001;
const int MAX = 500000;
int cnt;
int L[1 + MAX/2] = {0},R[1 + MAX/2] = {0};


void merge(int* A,int left,int mid,int right)
{
	int n1,n2,n,i,j;
	//int L[1 + MAX/2] = {0},R[1 + MAX/2] = {0};
	n1 = mid - left;
	n2 = right - mid;

	for(int i = 0; i < n1; i++)
	{
		L[i] = A[left + i];
	}
	for(int i = 0; i < n2; i++)
	{
		R[i] = A[mid + i];
	}

	L[n1] = INF;
	R[n2] = INF;

	i = 0;
	j = 0;

	//cout << "right=" << right << "left=" << left << endl;
	//cout << "right - left= " << right << " - " << left << " = " << right - left << endl;

	for(int k = 0; k < right - left; k++)
	{
		if (L[i] <= R[j] )
		{
			A[left + k] = L[i];
			i++;
		}else
		{
			A[left + k] = R[j];
			j++;
		}

		cnt++;
	}

	//return cnt;
}


void mergesort(int* A,int left,int right)
{
	int mid,sol, sol_left, sol_right;

	if(left + 1 < right)
	{
		mid = (left + right) / 2;
		//cout << "mid=" << mid << endl;
		//sol_left = mergesort(A,left,mid);
		//sol_right = mergesort(A,mid,right);
		//sol = merge(A,left,mid,right) + sol_right + sol_left;

		mergesort(A,left,mid);
		mergesort(A,mid,right);
		merge(A,left,mid,right);

		//cout << "sol= " << sol << endl;
	}

	//return sol;
}

int main()
{
	int N,S[MAX] = {0},solution;
	cnt = 0;

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		cin >> S[i];
	}

	//solution = mergesort(S,0,N);
	mergesort(S,0,N);

	for(int i = 0; i < N; i++)
	{
		if (i == N-1)
		{
			cout << S[i] <<endl;
		}else
		{
			cout << S[i] << " ";
		}
	}

	cout << cnt << endl;

	return 0;
}
	