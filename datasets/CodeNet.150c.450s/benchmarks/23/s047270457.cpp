#include<iostream>
using namespace std;
int main ()
{
	int fif[100];
	int n,i;
	fif[0]=1,fif[1]=1;
	cin >> n;
	for(i=2;i<=n;i++)
	{
		fif[i]=fif[i-2]+fif[i-1];
	}
	cout << fif[n] << endl;
	return 0;
}