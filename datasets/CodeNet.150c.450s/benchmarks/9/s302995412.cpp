#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(void)
{	
	while (1) {
		char card[201] = "\0";
		cin >> card;
		
		if (card[0] == '-' && card[1] == '\0') break;
		
		int cnum = strlen(card);
		int m;
		cin >> m;
		for (int i = 0; i < m; i++) {
			int h;
			cin >> h;
			
			char temp[201] = "\0";
			strncpy(temp, card, h);
			for (int j = 0; j < cnum - h; j++) {
				card[j] = card[h+j];
			}
			strncpy(&card[cnum-h], temp, h);
		}
		
		cout << card << endl;
	}
	
	return 0;
}