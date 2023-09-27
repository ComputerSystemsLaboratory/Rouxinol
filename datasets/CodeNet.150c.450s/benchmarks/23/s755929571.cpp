#include <iostream> 

using namespace std;
int main()
{
	int f[100];
	int n;
	cin >> n;
	f[0] = 1;
	f[1] = 1;
	for(int i = 0; i < n; i++)
	{
		f[i+2] = f[i+1] + f[i];
	}
	cout << f[n] << endl;
    return 0;
}
