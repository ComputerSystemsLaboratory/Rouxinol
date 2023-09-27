#include <iostream>
#include <cstdio>


using namespace std;

const int INF = 1000000001;
const int MAX = 2000000;
int N;
long int cnt;
int S[MAX] = {0}, L[1 + MAX/2] = {0}, R[1 + MAX/2] = {0};

void merge(int* A,int left,int mid,int right)
{
	int n1,n2,i,j;
	n1 = mid - left;
	n2 = right - mid;

	for(int i = 0; i < n1; i++)
	{
		L[i] = A[left + i];
		//cout << " L[i] = " << L[i];
	}
	for(int i = 0; i < n2; i++)
	{
		R[i] = A[mid + i];
		//cout << " R[i] = " << R[i];
	}

	L[n1] = INF;
	R[n2] = INF;

	i = 0;
	j = 0;

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
			if (L[i] != INF)
			{
				cnt += n1 - i ;
				//cout << " cnt= " << cnt;
			}
		}
	}

	//cout << endl;
}


void mergesort(int* A,int left,int right)
{
	int mid;

	if(left + 1 < right)
	{
		mid = (left + right) / 2;
		mergesort(A,left,mid);
		mergesort(A,mid,right);
		merge(A,left,mid,right);
	}
}


int main()
{
	cnt = 0;

	scanf("%d", &N);

	for(int i = 0; i < N; i++)
	{
		scanf("%d", &S[i]);
		
	}

	mergesort(S,0,N);
	

	printf("%ld\n", cnt);
	
	return 0;
}
	