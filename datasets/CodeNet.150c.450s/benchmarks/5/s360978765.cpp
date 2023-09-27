 #include <iostream>
using namespace std;
int main()
{
	int a[100], n, i, e;
	cin >> n;
	n <= 100 ;
	for (i = 0 ; i <= n; i++)
		cin >> a[i];
	for (e = n - 1 ; e >= 1 ; e--)
	{
		cout << a[e] << " " ;
	}
	  cout << a[0] ;
	  cout << endl;
}