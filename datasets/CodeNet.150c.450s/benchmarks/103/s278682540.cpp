#include<iostream>
using namespace std;

int cnt, n, s;
void bt(int deep, int sum, int use);

int main(){
	while(cin >>n >>s){
		cnt = 0;
		if(n == 0 && s == 0) break;
		bt(0, 0, -1);
		cout <<cnt <<endl;
	}
	return 0;
}

void bt(int deep, int sum, int use){
	if(n <= deep){
		if(sum == s){
			cnt++;
		}
	} else{
		//cout <<"deep = " <<deep <<" " <<"sum = " <<sum <<" " <<"use = " <<use <<endl;
		for(int i = use + 1; i <= 9; i++){
			bt(deep + 1, sum + i, i);
		}
	}
}