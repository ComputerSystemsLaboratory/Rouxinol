#include <iostream>
#include <string>
#include <stack>
#include <math.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;





int main()
{
	int n;
	int sum;
	int k[19];//k[i]???i?????????????¶?????????§??????????????¨?????????????????????
	while (cin >> n) {
		sum = 0;
		if (n > 36) {
			cout << "0" << endl;
		}
		else{
			
			for (int i = 0; i < 19; i++) {
				if (i < 10) {
					k[i] = i + 1;
				}
				else {
					k[i] = 19 - i;
				}
			}
			for (int i = max({0,n-18}); i <= min({ 18,n }); i++) {
				sum += k[i] * k[n - i];
			}
			cout << sum << endl;
		}
		
	}





}