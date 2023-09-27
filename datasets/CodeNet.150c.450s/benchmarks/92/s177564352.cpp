#include <iostream>
//#include <iomanip>
//#include <vector>
//#include <string>
#include <algorithm>
#include <functional>

using namespace std;

int main(){

	int a, b, c, ans ;


	while (1){
		ans = 1;

		if(!(cin >> a)) break;
		cin >> b;

		c = a + b;

		while (c /= 10){
			ans++;
		}
		cout << ans << endl;
	}


	return 0;
}