#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;

#define rep(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define H_MAX 10
#define W 5
int H,score;
int pazzle[H_MAX][W];

void disp(){

	rep(i, 0, H){
		rep(j, 0, W)cout << pazzle[i][j];
		cout << endl;
	}
}

bool calc(void){
	//disp();
	int prev = score;
	rep(i, 0, H){
		bool check[W] = { false };
		int num = 0;
		int cnt = 0;
		rep(j, 1, W - 1)
		if (pazzle[i][j] == pazzle[i][j - 1] && pazzle[i][j] == pazzle[i][j + 1]){
			cnt++;
			num = pazzle[i][j];
			rep(k, j - 1, j + 2)check[k] = true;

		}
		score += (cnt + 2)*num;
		rep(j, 0, W)if (check[j])pazzle[i][j] = 0;
	}


	if (prev != score)return true;
	else return false;
}



void clear(){
	//disp();
	rep(i, -H+1, 0)
		rep(j, 0, W)if (!pazzle[-i][j]){
		rep(k, i + 1, 1)if (pazzle[-k][j]){
			int temp = pazzle[-i][j];
			pazzle[-i][j] = pazzle[-k][j];
			pazzle[-k][j] = temp;
			break;
		}
	}
	//disp();



}

int main(void){
	while (true){

		cin >> H;
		if (!H)return(0);
		score = 0;
		rep(i, 0, H)rep(j, 0, W)cin >> pazzle[i][j];
		while (calc())clear();
		cout << score << endl;
	}




}