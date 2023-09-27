//ITP1_9 Shuffle

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string card;  //最初の並びを表す文字列
	int N;  //シャッフル回数
	int h;
	while(1){
		cin >> card;
		if(card == "-")
			break;
		cin >> N;
		int n = card.length();
		for(int i = 0; i < N; i++){
			cin >> h;
			string left = card.substr(0,h);
//			cout << "left: " << left << endl;
			card += left;
			card = card.substr(h,n);
//			cout << "card: " << card << endl;
		}
		cout << card << endl;
	}
	
	return 0;
}