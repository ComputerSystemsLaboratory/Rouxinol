#include<iostream>
#include<string>
#include<vector>

#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

int main(void) {
	int temp = 0;
	int cost_input[10];
	int cost_return = 0;
	int num[10];
	int j = 0;

	for (int i = 0; i < 10; ++i) {
		CI temp;
		if (temp == 0) {
			j = i;
			break;
		}
		cost_input[i] = temp;

		cost_return = 1000 - cost_input[i];
		num[i] = 0;

		if (cost_return < 5) {
			num[i] = cost_return;
			continue;
		}
		else {
			if (cost_return < 10) {
				num[i] = 1 + cost_return - 5;
				continue;
			}
		}


		if (cost_return >= 500) {
			++num[i];
			cost_return -= 500;
		}
		while (1) {
			if (cost_return >= 100) {
				++num[i];
				cost_return -= 100;
			}
			if (cost_return < 100)break;
		}
		if (cost_return >= 50) {
			++num[i];
			cost_return -= 50;
		}
		while (1) {
			if (cost_return >= 10) {
				++num[i];
				cost_return -= 10;
				if (cost_return < 10)break;
			}
		}

		if (cost_return >= 5) {
			++num[i];
			cost_return -= 5;
		}
		while (1) {
			if (cost_return >= 1) {
				++num[i];
				cost_return -= 1;
			}
			if (cost_return < 1)break;
		}
		
	}
	
	for (int i = 0; i < j; ++i) {
		CO num[i] E
	}

	
}