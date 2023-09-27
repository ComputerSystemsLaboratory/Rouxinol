#include <iostream>
using namespace std;

int main()
{
	int n, i = 3, tmp;
	cin >> n;

	while (i <= n) {
		if (i % 3 == 0) {
			cout << ' '<< i ;
		}
		else{
			for (tmp = i; tmp != 0; tmp /= 10) {
				if (tmp % 10 == 3) { 
					cout << ' '<< i ; 
					break;
				}
			}
		}
		i++;
	}
	cout << endl;
    return 0;
}