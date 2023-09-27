#include <iostream>
#include <algorithm>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <vector>
#include <functional>
#include <map>
using namespace std;

int n;
bool list[4][13];
vector<int> v;
map<char, int> m;
int main(){
	m['S'] = 0;
	m['H'] = 1;
	m['C'] = 2;
	m['D'] = 3;

	cin >> n;

	for (int i = 0; i < n; ++i){
		int num;
		char c;
		cin >> c >> num;
		num--;
		list[m[c]][num] = true;
	}

	for (int i = 0; i < 4;++i){
		for (int j = 0; j < 13;++j){
			if (!list[i][j]){
				char c = 'z';
				switch (i)
				{
				case 0:
					c = 'S';
					break;
				case 1:
					c = 'H';
					break;
				case 2:
					c = 'C';
					break;
				default:
					c = 'D';
					break;
				}
				cout << c << " " << j + 1 << endl;
			}
		}
	}

	return 0;
}