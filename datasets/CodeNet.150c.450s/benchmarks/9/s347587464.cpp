#include<string>
#include<iostream>
using namespace std;
int main(){
	string card, tmp1, tmp2;
	int sh_place, sh_cnt;
	while(true){
		cin >> card;
		if(card == "-") break;
		cin >> sh_cnt;
		while(0 < sh_cnt--){
			cin >> sh_place;
			tmp1 = card.substr(0,sh_place);
			tmp2 = card.substr(sh_place);
			card = tmp2 + tmp1;
		}
		cout << card << endl;
	}
	return 0;
}