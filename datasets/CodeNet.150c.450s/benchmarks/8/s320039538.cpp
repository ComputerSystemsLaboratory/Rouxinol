#include <iostream>
#include <string>

using namespace std;

void count_score(string taro_card, string hanako_card, int &taro_score, int &hanako_score)//?????????????????????????????????????????????
{
	int min_size = 1;
	if(taro_card.size() > hanako_card.size()){
		min_size = hanako_card.size();
	}
	else{
		min_size = taro_card.size();
	}
	
	for(int i = 0; i < min_size; i++){
		if(taro_card[i] > hanako_card[i]){
			taro_score += 3;
			return;
		}
		else if(taro_card[i] < hanako_card[i]){
			hanako_score += 3;
			return;
		}
	}
	if(taro_card.size() > hanako_card.size()){
		taro_score += 3;
	}
	else if(taro_card.size() < hanako_card.size()){
		hanako_score += 3;
	}
	else{
		taro_score += 1;
		hanako_score += 1;
	}
}
int main(void)
{
	int n;//n?????????
	cin >> n;
	
	int taro_score = 0;
	int hanako_score = 0;
	for(int i = 0; i < n; i++){
		
		string taro_card;
		string hanako_card;
		cin >> taro_card;
		cin >> hanako_card;
		
		count_score(taro_card, hanako_card, taro_score, hanako_score);
	}
	cout << taro_score << ' ' << hanako_score << endl;
	return 0;
}