#include<iostream>
using namespace std;
int main()
{
	int A[4][3][10] = { 0 };
	int n;
	cin >> n;
	for (int nn=0; nn<n; nn++)
	{
		int b;
		int f;
		int r;
		int v;
		cin >> b >> f >> r >> v;
		A[b-1][f-1][r-1] += v;
	}
	for (int bb = 0; bb <4; bb++)
	{
		for (int ff = 0; ff<3; ff++)
		{
			for (int rr = 0; rr < 10; rr++)
			{
				cout << " ";
				cout << A[bb][ff][rr];
			}
			cout << endl;
		}
		if (bb!=3){ cout << "####################"<<endl; }
	}
	return 0;
}