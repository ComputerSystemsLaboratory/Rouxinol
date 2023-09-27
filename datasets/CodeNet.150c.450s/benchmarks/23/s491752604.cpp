
#include<iostream>

using namespace std;

int main()
{
	int n,i;
	int a[44];
	cin >> n;
	a[0]=1;
	a[1]=1;
	a[2]=2;
	for(i=2;i<=n;i++){
		a[i]=a[i-1]+a[i-2];
	}
	cout << a[n] << endl;
}