#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>

using namespace std;

int n, ct = 0;
bool p[1000001];

int main(){
	for (int i = 0; i < 1000001; i++) p[i] = 1;
	for (int i = 2; i < 1000; i++){
		if (p[i] == 1){
			for (int j = 0; i*(j + 2) < 1000000; j++){
				p[i*(j + 2)] = 0;
			}
		}
	}
	while (cin >> n){
		for (int i = 2; i < n + 1; i++)
			if (p[i] == 1) ct++;
		cout << ct << endl;
		ct = 0;
	}
}