#include<iostream>
using namespace std;
int main()
{
	char a;
	int rank, b1[14] = {}, b2[14] = {}, b3[14] = {}, b4[14] = {}, i, m;
	cin >> m;
	 while (m--)
	{
		cin >> a >> rank;
		if (a == 'S')b1[rank]++;
		if (a == 'H')b2[rank]++;
		if (a == 'C')b3[rank]++;
		if (a == 'D')b4[rank]++;
	}
	for (i = 1; i <= 13; i++)
		if (b1[i] == 0)cout<<'S' <<" "<<i << endl;
	for (i = 1; i <= 13; i++)
		if (b2[i] == 0)cout<<'H' <<" "<<i << endl;
	for (i = 1; i <= 13; i++)
		if (b3[i] == 0)cout<< 'C'<<" "<<i << endl;
	for (i = 1; i <= 13; i++)
	{
		if (b4[i] == 0)cout << 'D' << " " << i << endl;
		
	}
	
	return 0;	
}
