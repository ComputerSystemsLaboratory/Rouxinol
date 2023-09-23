#include <iostream>
using namespace std;

int main(){
	while (1){
		int sum = 0;
		int n;
		int a_sum = 0;
		cin >> n;
		if (!n) return 0;
		for (int i = 0; i < n; i++){
			int a_num, b_num;
			cin >> a_num;
			cin >> b_num;

			if (a_num > b_num){
				a_sum += (a_num + b_num);
			}
			else if (a_num == b_num){
				a_sum += a_num;
			}
			sum += a_num + b_num;
		}

		cout << a_sum << " " << sum - a_sum << "\n";
	}
}