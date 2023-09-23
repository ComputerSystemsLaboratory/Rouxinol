/*
 * hoge.cpp
 *
 *  Created on: 2014/09/30
 *      Author: eiichi
 */
#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<map>
#include<list>
using namespace std;

bool t[4][14];
int main(void){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		char c;int a;
		cin >> c >> a;
		if(c=='S')
			t[0][a] = true;
		else if(c=='H')
			t[1][a] = true;
		else if(c=='C')
			t[2][a] = true;
		else if(c=='D')
			t[3][a] = true;
	}

	for(int i=0;i<4;i++){
		for(int j=1;j<=13;j++){
			if(!t[i][j]){
				switch(i){
				case 0:
					cout << "S ";
					break;
				case 1:
					cout << "H ";
					break;
				case 2:
					cout << "C ";
					break;
				case 3:
					cout << "D ";
					break;
				}
				cout << j << endl;
			}
		}
	}

	return 0;
}