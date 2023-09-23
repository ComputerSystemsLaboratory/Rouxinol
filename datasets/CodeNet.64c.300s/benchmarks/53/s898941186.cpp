#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	int count;
	for (int i = a; i <= b; i++)
		if (c % i == 0)
			count++;
	cout << count << endl;
	return 0;
}
