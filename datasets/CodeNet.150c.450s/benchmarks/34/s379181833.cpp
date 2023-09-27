#include <iostream>
using namespace std;

int main()
{
	int s[33] = {1, 1, 2};
	int n;
	
	for (int i = 3; i <= 33; i++){
		s[i] = s[i - 3] + s[i - 2] + s[i - 1];
	}
	
	while (cin >> n, n){
		if (s[n] % 3650 == 0){
			cout << s[n] / 3650 << endl;
		}
		else {
			cout << s[n] / 3650 + 1 << endl;
		}
	}
	
	return (0);
}