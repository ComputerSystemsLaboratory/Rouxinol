#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	int ct;
	int n;
	
	cin >> a >> b >> c;
	
	ct = 0;
	for (n = a; n <= b; n++){
		if (c % n == 0){
			ct++;
		}
	}
	
	cout << ct << endl;
	
	return (0);
}