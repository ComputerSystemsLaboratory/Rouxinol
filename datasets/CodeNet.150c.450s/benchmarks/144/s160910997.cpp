#include <iostream>

using namespace std;

int main ()
{
	int n,m,l;
	long A[105][105],B[105][105],C[105][105];
	cin >> n >> m >> l;



	for (int a = 0; a < n; a++)
	{
		for (int b = 0; b < m; b++)
		{
			cin >> A[a][b];
		}
	}


	for (int b = 0; b < m; b++)
	{
		for (int c = 0; c < l; c++)
		{
			cin >> B[b][c];
		}
	}





	for (int a = 0; a < n; a++)
	{
		for (int c = 0; c < l; c++)
		{
			for (int b = 0; b < m; b++)
			{
				C[a][c] += A[a][b] * B[b][c];
			}
		}
	}




	for (int a = 0; a < n; a++)
	{
		for (int c = 0; c < l; c++)
		{
			if( c != l-1){
			                cout << C[a][c] <<" ";
			            }else{
			                cout << C[a][c] << endl;
			            }

		}
	}
	return 0;
}