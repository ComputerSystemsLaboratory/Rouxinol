#include<iostream>
using namespace std;
int A[100];
void print(int A[], int n)
{
	for (int i = 0; i < n-1; ++i)
	{
		cout<<A[i]<<" ";
	}
	cout<<A[n-1]<<endl;
}

int main()
 {
 	int n;
 	cin>>n;
 	for (int i = 0; i < n; ++i)
 	{
 		cin>>A[i];
 	}

 	int cnt = 0;
 	for (int i = 0; i < n; ++i)
 	{
 		int minj = i;
 		for (int j = i; j < n; ++j)
 		{
 			if(A[j] < A[minj]) 
 			{
 				minj = j;
 			}

 		}
 		if(minj != i)
 		{
 			int temp;
			temp = A[i];
			A[i] = A[minj];
			A[minj] = temp;
			cnt++;
		}

 	}

 	print(A,n);
 	cout<<cnt<<endl;
 	return 0;
 }