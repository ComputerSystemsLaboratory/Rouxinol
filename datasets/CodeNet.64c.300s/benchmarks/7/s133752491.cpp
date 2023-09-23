#include <iostream>

using namespace std;
int CARD_NUM = 13;
int CARD_TOTAL_NUM = 13 * 4;
char const CARD_TYPES[] = {'S','H','C','D'};

void output(int card){
	int cardtype = card / CARD_NUM;
	int cardnum = (card % CARD_NUM) + 1;
	cout << CARD_TYPES[cardtype] << " " << cardnum << "\n";
}
int input(){
	char cardtype;
	int cardnum;
	cin >> cardtype >> cardnum;
	for(int i = 0; i < 4; i++){
		if(CARD_TYPES[i] == cardtype) {
			return i * CARD_NUM + cardnum - 1;	
		}
	}
	return 0;//??±???
}
int main(int argc, char *argv[]){
	int isExistCard[CARD_TOTAL_NUM];
	for(int i = 0; i < CARD_TOTAL_NUM; i++){
		isExistCard[i] = false;	
	}
	int existNum;
	cin >> existNum;
	for(int i = 0; i < existNum; i++){
		int card = input();
		isExistCard[card] = true;	
	}
	for(int i = 0; i < CARD_TOTAL_NUM; i++){
		if (!isExistCard[i]){
			output(i);
		}
	}
	return 0;
}