#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int a, b;
	
	while (1){
		cin >> n;
		if (n == 0)break;
		
		a = b = 0;
		for (int i = 0; i < n; i++){
			int ca, cb;
			cin >> ca >> cb;
			if (ca > cb){
				a += ca + cb;
			}
			else if (ca == cb){
				a += ca;
				b += cb;
			}
			else {
				b += ca + cb;
			}
		}
		
		cout << a << ' ' << b << endl;
	}
	
	return (0);
}