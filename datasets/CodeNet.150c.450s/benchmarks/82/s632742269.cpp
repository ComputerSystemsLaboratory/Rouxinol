#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<iostream>
using namespace std;

int main() {
	const int n = 6;
	int dice[n];
	int top, front;
	int p;
	int dice_result[6];
	/*     const int dice_tem[4][6] ={ {2,6,3,4,1,5},{5,1,3,4,6,2},
	{4,2,1,6,5,3},{3,2,6,1,5,4}};*/
	const int dice_tem[4][6] = { { 3,2,6,1,5,4 },{ 2,6,3,4,1,5 },
	{ 5,1,3,4,6,2 },{ 4,2,1,6,5,3 } };
	for (int i = 0; i < n; i++) {
		cin >> dice[i];
	}
	int num;
	cin >> num;
	for (int v = 0; v < num; v++) {
		cin >> top >> front;
		for (int d = 0; dice[0] != top ; d++) {
			if (d == 0)continue;

			for (int i = 0; i < n; i++) {
				dice_result[i] = dice[dice_tem[d % 2][i] - 1];
			}
			for (int i = 0; i < n; i++)dice[i] = dice_result[i];
		//	cout << "dice0 : " << dice[0] << endl;
		}
		//for (int i = 0; i < n; i++) { cout << dice[i] <<' '; }cout << endl;
		
		
		for (p = 0; p < 4; p++) {
			for (int i = 0; i < n; i++) {
			dice_result[i] = dice[dice_tem[p][i]-1];
		}
		//	cout << "p: " << p << " res" << dice_result[0] << endl;
			if (front == dice_result[0]) break;
		}
	//	cout << "result:" << dice[dice_tem[p][p +2 ]] << " p" << p << endl;
		int a = p == 0 ? 2 : p == 1 ? 0 : p == 2 ? 3 : p == 3 ? 1 : -1;
		int y[6];
		for (int i = 0; i < n; i++)y[i] = dice[dice_tem[a][i] - 1];
		cout << y[0]  << endl;
		

	}
	return 0;
}
		
