#include<iostream>

int ball[10];
int ls = 0, rs = 0;
bool res = true;

int main(){
	int n;
	std::cin >> n;
	for (int j = 0; j < n; j++){
		ls = 0, rs = 0, res = true;

		for (int i = 0; i < 10; i++)std::cin >> ball[i];

		for (int i = 0; i < 10; i++){
			int d1 = ball[i] - ls, d2 = ball[i] - rs;

			if (d1 > 0 && d2 > 0){
				if (d1 <= d2)ls = ball[i];
				else rs = ball[i];
			}
			else if (d1 > 0 && d2 < 0)ls = ball[i];
			else if (d1 < 0 && d2 > 0)rs = ball[i];
			else res = false;
		}

		std::cout << (res ? "YES" : "NO") << std::endl;
	}
	return 0;
}