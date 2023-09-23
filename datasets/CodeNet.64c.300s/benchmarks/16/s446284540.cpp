#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, v;
	int R[200000] = {0};
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> v;
		R[i] = v;
	}
	
	int minv = R[0];
	int maxv = R[1]-R[0];
	for (int j = 1; j < n; j++)
	{
		if (maxv < (R[j] - minv))
			maxv = (R[j] - minv);
		if (minv > R[j])
			minv = R[j];
		
		//cout << "DEBUG:" << "minv=" << minv << ",maxv=" << maxv << endl;
	}
	
	cout << maxv << endl;
	
	return 0;
}