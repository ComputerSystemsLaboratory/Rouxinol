#include <iostream>
#include <iomanip>
#include <list>
#include <map>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
	pair<int,int> hiduke;
	string table[12][31];
	string day[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int dayCounter = 3;


	for(int i = 0; i < 12; i++){
		if(i == 1){
			for(int j = 0; j < 29; j++){
				table[i][j] = day[dayCounter++];
				if(dayCounter % 7 == 0){
					dayCounter = 0;
				}
			}
		}
		else if(i == 3 || i == 5 || i == 8 || i == 10){
			for(int j = 0; j < 30; j++){
				table[i][j] = day[dayCounter++];
				if(dayCounter % 7 == 0){
					dayCounter = 0;
				}
			}
		}
		else{
			for(int j = 0; j < 31; j++){
				table[i][j] = day[dayCounter++];
				if(dayCounter % 7 == 0){
					dayCounter = 0;
				}
			}
		}
	}



	while(cin >> hiduke.first >> hiduke.second && hiduke.first != 0){
		cout << table[hiduke.first - 1][hiduke.second - 1] << endl;
	}

	return 0;
}