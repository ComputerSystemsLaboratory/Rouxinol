#include <cstdio>
#include <iostream>

using namespace std;

// cl /EHsc xxx.cpp
int main(int argc, char *argv[])
{
	int bfrv[4][3][10] = {0};
	
	int n;
	cin >> n;
	int t = n;
	
	int b, f, r, v;
	while (t)
	{
		cin >> b >> f >> r >> v;
		//printf("%d %d %d %d t=%d\n", b, f , r, v, t);
		bfrv[b-1][f-1][r-1] += v;
		
		t--;
	}
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				cout << " " << bfrv[i][j][k];
			}
			cout << endl;
		}
		if (i < (4-1))
			cout << "####################" << endl;
	}
	
	return 0;
}