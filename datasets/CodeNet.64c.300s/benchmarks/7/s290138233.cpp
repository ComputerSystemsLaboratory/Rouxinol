#include <iostream>
using namespace std;

#define SPADE 0
#define HEART 1
#define CLUB 2
#define DIA 3
#define TYPE_NUM 4
#define CARD_NUM 13

int pow2(int num) {
	int x = 1;
	for (int i = 1; i < num; i++) {
		x *= 2;
	}
	return x;
}

int main() {
	int n,num;
	char type;
	short card[TYPE_NUM] = {0,0,0,0};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> type >> num;
		switch (type) {
		case 'S':   card[SPADE] |= pow2(num); break;
		case 'H':   card[HEART] |= pow2(num); break;
		case 'C':   card[CLUB] |= pow2(num); break;
		case 'D':   card[DIA] |= pow2(num); break;
		}
	}
	for (int i = 0; i < TYPE_NUM; i++) {
	    int x = 0x1;
		for (int j = 1; j <= CARD_NUM; j++) {
			if (!(card[i] & x)) {
				switch (i) {
				case SPADE: type = 'S'; break;
				case HEART: type = 'H'; break;
				case CLUB:  type = 'C'; break;
				case DIA:   type = 'D'; break;
				}
				cout << type << " " << j << endl;
			}
			x *= 0x2;
		}
	}
	return 0;
}