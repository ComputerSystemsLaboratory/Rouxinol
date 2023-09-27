#include <iostream>
#include <string>
using namespace std;

int main(void){
	int gameCount, taroScore, hanakoScore;
	int len;
	string taro, hanako;

	gameCount = taroScore = hanakoScore = 0;

	cin >> gameCount;

	for (int i = 0; i < gameCount; i++){
		cin >> taro >> hanako;
		
		if (taro.length() > hanako.length()) len = hanako.length();
		else  len = taro.length();

		for (int j = 0; j < len; j++){
			if (taro[j] == hanako[j]){
				if (j == len - 1){
					if (taro.length() < hanako.length()){
						hanakoScore += 3;
						break;
					}
					else if (taro.length() > hanako.length()){
						taroScore += 3;
						break;
					}
					else{
						taroScore += 1;
						hanakoScore += 1;
						break;
					}
				}
				continue;
			}
			if (taro[j] - hanako[j] < 0){
				hanakoScore += 3;
				break;
			}
			else if (taro[j] - hanako[j] > 0){
				taroScore += 3;
				break;
			}
		}
	}

	cout << taroScore << " " << hanakoScore << "\n";

	return 0;
}