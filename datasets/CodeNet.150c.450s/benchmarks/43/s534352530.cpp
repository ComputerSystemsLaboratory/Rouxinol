#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int cnt = 0;

void calc_point(int n, int card[10000][2], int point[10000][2]) {
	//get input
	for (int i = 0; i < n; i++){
		if (card[i][0] > card[i][1])
			point[cnt][0] += card[i][0]+card[i][1];
		else if(card[i][0] < card[i][1])
			point[cnt][1] += card[i][0]+card[i][1];
		else{
			point[cnt][0] += card[i][0];
			point[cnt][1] += card[i][1];
		}
	}
	cnt++;
}

int main(){
	int n = 1;
	int card[10000][2];
	int point[10000][2];
	while (1){
		scanf("%d", &n);
		if (n==0) break;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < 2; j++)
				scanf("%d", &card[i][j]);
		}
		calc_point(n, card, point);
	}
	for (int i = 0; i < cnt; i++)
		cout << point[i][0] <<" "<< point[i][1] << endl;
}