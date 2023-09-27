#include<iostream>
using namespace std;

int main()
{
	int count = 0, x = 0, a[10000] = { 0 };
	while (1){
		cin >> x;
		if (x == 0) break;
		a[count] = x, count++;
	}
	for (int i = 1; i <= count; i++) cout << "Case " << i << ": " << a[i - 1] << endl;
	return 0;
}