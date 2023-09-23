#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

#define pi 3.141592653589

void cut(void);

int main(){
	int room[4][3][10] = { 0 };	//4棟3階建10部屋
	int b, f, r, v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		room[b - 1][f - 1][r - 1] += v;
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 10; k++)
			{
				cout << " " << room[i][j][k];
			}
			cout << endl;
		}
		if (i != 3){
			cut();
			cout << endl;
		}
	}
	return 0;
}

void cut(){
	for (int i = 0; i < 20; i++){
		cout << "#";
	}
	return;
}