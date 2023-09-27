#include <iostream>
#include <vector>

using namespace std;

void sort(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int n, r;
	while(cin >> n >> r && n!=0 && r != 0)
	{	
		vector<int> A(n);
		for(int i = 0;i < n; i++)
		{
			A[i] = n - i;
		}

		int p, c;

		for(int i = 0; i < r; i++)
		{
			cin >> p >> c;
			vector<int> B(p);
			
			int j = 0;
			for(int i = 0; i < p-1;i++)
				B[i] = A[i];

			for(int i = p-1; i < p+c-1; i++)
				sort(&A[i], &A[i-(p-1)]);

			for(int i = c; i < c+p-1;i++)
				A[i] = B[i-c];
		}
		cout << A[0] << endl;
	}
	return 0;
}
