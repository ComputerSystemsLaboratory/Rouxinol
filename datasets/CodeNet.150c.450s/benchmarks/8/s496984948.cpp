#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	int tScore = 0, hScore = 0;
	cin >> n;
	for(int i = 0;i < n;i++)
	{
		char t[100], h[100];
		cin >> t >> h;
		int j = strcmp(t, h);
		if (j > 0)
			tScore += 3;
		else if (j == 0)
		{
			tScore++; hScore++;
		}
		else
			hScore += 3;
	}
	cout << tScore << " " << hScore << endl;
	return 0;
}
