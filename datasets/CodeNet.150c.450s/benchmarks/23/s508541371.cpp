#include"iostream"
using namespace std;
int n;
int main()
{
	cin >> n; 
	if (n == 1 || n == 0){
		cout << 1 << endl; return 0;
	}
	long long a=1, b=1,c;
	for (int i = 1; i < n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	cout << c << endl;
	return 0;
}