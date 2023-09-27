#include <iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
#include<string>
using namespace std;



int main(void){

	int a, b, sum = 0, count;

	for (; 	cin >> a >> b;){//??°????????????????????°?????????
		count = 0;
		sum = a + b;
		if (sum == 0){ cout << 0 << endl; }
		else if (sum != 0){

			while (sum > 9){

				sum /= 10;
				count++;

			}
			//?????°???count?????°
			cout << count + 1 << endl;
		}
	}


	return 0;
}