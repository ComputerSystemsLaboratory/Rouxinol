#include <bits/stdc++.h>

using namespace std;

int main(void){
	while(1){
		int num;
		int count = 0;
		cin >> num;
		if(num == 0){
			break;
		}

		for(int i = 2; double(num) / i - i / 2 > 0; i++){
			if(i % 2 == 0){
				if(num % i == i / 2){
					count += 1;
				}
			}else{
				if(num % i == 0){
					count += 1;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}