#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long int i = 1;
	while (n >= 1) {
		i *= n;
		n--;
	}
	cout << i<<endl;;

	return 0;
}