#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(void)
{	
	int point_taro = 0;
	int point_hana = 0;
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char card_taro[101] = "\0";
		char card_hana[101] = "\0";
		cin >> card_taro;
		cin >> card_hana;
		
		int cmp = strcmp(card_taro, card_hana);
		if (cmp > 0) {
			point_taro += 3;
		} else if (cmp < 0) {
			point_hana += 3;
		} else {
			point_taro++;
			point_hana++;
		}
	}
	
	cout << point_taro << " " << point_hana << endl;
	
	return 0;
}