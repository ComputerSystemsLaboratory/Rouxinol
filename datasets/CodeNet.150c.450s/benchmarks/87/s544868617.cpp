#include <bits/stdc++.h>
using namespace std;
int erase(vector<vector<int>>& bd){
	for(int i=0;i<bd.size();i++){
		for(int j=0;j<3;j++){
			if( bd[i][j]%10 == bd[i][j+1]%10 && bd[i][j+1]%10 == bd[i][j+2]%10 ){
				bd[i][j] += 10;
				bd[i][j+1] += 10;
				bd[i][j+2] += 10;
			}
		}
	}
	int points = 0;
	for(int i=0;i<bd.size();i++){
		for(int j=0;j<5;j++){
			if(bd[i][j] >= 10){
				points += bd[i][j]%10;
				bd[i][j] = 0;
			}
		}
	}
	return points;
}
void drop(vector<vector<int>>& bd){
	bool update = true;
	while(update){
		update = false;
		for(int i=1;i<bd.size();i++){
			for(int j=0;j<5;j++){
				if(bd[i][j] == 0 && bd[i-1][j] != 0){
					bd[i][j] = bd[i-1][j];
					bd[i-1][j] = 0;
					update = true;
				}
			}
		}
	}
}
bool solve(){
	int H;
	cin >> H;
	if(H == 0)return false;
	vector<vector<int>> bd(H,vector<int>(5));
	for(int i=0;i<H;i++){
		for(int j=0;j<5;j++){
			cin >> bd[i][j];
		}
	}
	int ret = 0,p;
	while((p = erase(bd)) != 0){
		ret += p;
		drop(bd);
	}
	cout << ret << endl;
	return true;
}



int main(void){
	while(solve()){
		
	}
	return 0;
}