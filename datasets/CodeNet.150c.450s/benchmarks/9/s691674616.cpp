#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char card[201],temp[201];
	int h,m;
	while(1){
		cin >> card;
		if(card[0] ==  '-') break;
		cin >> m;
		int n = strlen(card);
		for(int i = 0;i < m;i++) {
			cin >> h;
			for(int j = 0;j < h;j++) temp[j] = card[j];
			for(int k = 0;k < n;k++){
				if(k < n - h) card[k] = card[k + h];
				else card[k] = temp[k + h - n];
				}
		}
			cout << card << endl;	
	}	
		
		return 0;
		}
		
	