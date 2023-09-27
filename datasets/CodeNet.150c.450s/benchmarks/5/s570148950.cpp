#include <iostream>
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int a[101];
	int n;

	cin >> n;
	rep(i,n) cin >> a[i];

	for(int i=n-1;i>=0;i--)
	{
		if(i == 0)
		{
			cout << a[i] << endl;
		}
		else
		{
			cout << a[i] << " ";
		}
	}
	return 0;
}