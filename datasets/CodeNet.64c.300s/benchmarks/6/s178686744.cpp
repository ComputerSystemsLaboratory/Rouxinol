//============================================================================
// Name        : HelloCPP.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

	int n;
	int b,f,r,v;
	int rooms[5][4][11];

	for(int i = 1; i <= 4; i++)
		for(int j = 1; j <= 3; j++)
			for(int k = 1; k <= 10; k++)
				rooms[i][j][k] = 0;

	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		rooms[b][f][r] += v;
	}

	for(int i = 1; i <= 4; i++){
		if(i > 1) cout << "####################\n";
		for(int j = 1; j <= 3; j++){
			for(int k = 1; k <= 10; k++){
				cout << " " << rooms[i][j][k];
			}
			cout << endl;
		}
	}

}