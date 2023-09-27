#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, r, p, c;
	
	while(cin >> n >> r && n>0)
		{
			//山を作る
			int A[n];
			for(int i = 0; i<n; i++){ A[i] = n-i; }
			
			//表示
			//for(int i = 0; i<n; i++){ cout << A[i] << " "; }
			//cout << endl;
			
			for(int i = 0; i<r; i++)
			{
				cin >> p >> c;
				rotate(&A[0], &A[p-1], &A[p+c-1]);
				
				//表示
				//for(int i = 0; i<n; i++){ cout << A[i] << " "; }
				//cout << endl;
			}
			cout << A[0] << endl;
		}
}
