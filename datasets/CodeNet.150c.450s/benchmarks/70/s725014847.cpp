#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int a, b;
	while(1){
		cin >> a >> b;
		if(a == 0 && b == 0) break;
		int date[13][32];
		for(int i = 0;i < 13;i++){
			for(int j = 0;j < 32;j++){
				date[i][j] = 9;
			}
		}
		int count = 0;
		for(int i = 1;i < 13;i++){
			if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
				for(int j = 1;j < 32;j++){
					date[i][j] = count;
					count++;
					if(count == 7) count = 0;
					//cout << date[i][j];
				}
				//cout << endl;
			}
			else if(i == 4 || i == 6 || i == 9 || i == 11){
				for(int j = 1;j < 31;j++){
					date[i][j] = count;
					count++;
					if(count == 7) count = 0;
				}
			}
			else if(i == 2){
				for(int j = 1;j < 30;j++){
					date[i][j] = count;
					count++;
					if(count == 7) count = 0;
				}
			}

		}

		if(date[a][b] == 0) cout << "Thursday" << endl;
		if(date[a][b] == 1) cout << "Friday" << endl;
		if(date[a][b] == 2) cout << "Saturday" << endl;
		if(date[a][b] == 3) cout << "Sunday" << endl;
		if(date[a][b] == 4) cout << "Monday" << endl;
		if(date[a][b] == 5) cout << "Tuesday" << endl;
		if(date[a][b] == 6) cout << "Wednesday" << endl;

	}
	return 0;
}