#include <math.h>
#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
	using namespace std;

	int  a = 1, n = 1;
	bool flag = false;

	while(!(a == 0 &&  n == 0)){
		cin >> a >> n;
		flag = false;

		if(a == 0 && n == 0) break;

		vector <int> dec;
		vector <int> sum;

		sum.push_back(a);

		while(!flag){
			dec.clear();

			int max = 0, min = 0;

			for(int i=0; i < n; i++) {
				dec.push_back(a % 10);
				a /= 10;
			}

			//DESC sort
			sort(dec.begin(), dec.end(), greater<int>() );

			for(int i = 0; i < n; i++){
				max += dec.at(i) * pow(10, n-i-1);
				min += dec.at(n-i-1) * pow(10, n-i-1);
			}
			a = max - min;
			sum.push_back(a);

			//same digit check
			for(int j =sum.size() - 2; j >= 0; j--){
				if(sum.at(sum.size() -1) == sum.at(j)){
					cout << j <<" "<< sum.at(sum.size() -1) << " " << (sum.size() -1) - j << endl;
					flag = true;
				}
				if(flag) break;
			}
		}
	}

	return 0;
}