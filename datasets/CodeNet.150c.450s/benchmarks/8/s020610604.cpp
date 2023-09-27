#include<iostream>
#include<string>
#define WIN_POINT 3
#define DRAW_POINT 1
using namespace std;

int main(){
	string p1_str, p2_str;
	int p1_score=0, p2_score=0, battle_num;
	cin >> battle_num;
	while(battle_num--){
		cin >> p1_str >> p2_str;
		if(p1_str < p2_str){
			p2_score += WIN_POINT;
		}else if(p1_str > p2_str){
			p1_score += WIN_POINT;
		}else if(p1_str == p2_str){
			p1_score += DRAW_POINT;
			p2_score += DRAW_POINT;
		}
	}
	cout << p1_score << ' ' << p2_score << endl;
	return 0;
}