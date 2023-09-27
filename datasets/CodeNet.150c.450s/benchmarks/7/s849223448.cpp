#include <iostream>
using namespace std;

int main()
{
	const int N = 10;
	int A[N];
	const int M = 3;
	int top[M] = {0};

	for(int i = 0; i < N; i++)
		cin>>A[i];

	for(int i = 0; i < N; i++)
	{
		if(top[0] < A[i])
		{
			top[2] = top[1];
			top[1] = top[0];
			top[0] = A[i];
		}
		else if(top[1]<A[i])
		{
			top[2] = top[1];
			top[1] = A[i];
		}
		else if(top[2] < A[i])
			top[2] = A[i];
	}


	for(int i = 0; i < M; i++)
		cout <<top[i] << endl;

	return 0;
}