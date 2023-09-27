#include <iostream>
using namespace std;

int main()
{
	int a[1000];
	int i = 0;
	int x;
	cin>>x;
	while (i < x)
	{
		int k;
		cin>>k;
		a[i] = k;
		i++;
	}
	for (int j = i - 1; j>=0; j--)
		if (j != 0)
			cout << a[j] <<" ";
		else
			cout << a[j] ;
	cout<< endl;
	return 0;
}