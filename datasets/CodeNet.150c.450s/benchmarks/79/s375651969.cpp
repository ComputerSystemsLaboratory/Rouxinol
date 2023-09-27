#include <iostream>
#include <vector>

using namespace std;

vector<int> cut(vector<int>& card, int ft, int noc)
{
	vector<int>::iterator itr;
	for(itr = card.begin(); itr != card.end(); ++itr){
		if(*itr < ft){
			*itr += noc;
		}else if(*itr < ft + noc ){
			*itr -= ft - 1;
		}
	}
	//for(itr = card.begin(); itr != card.end(); ++itr)
		//cout << *itr <<endl;
	//cout << endl;
	return card;
}

int main(void)
{
	int num, cut_num, top;
	vector<int>::iterator itr;

	while(1){
		cin >> num >> cut_num;
		if(num == 0 && cut_num == 0){
			break;
		}

		vector<int> card;
		for(int i = 0; i < num; i++){
			card.push_back(i + 1);
		}

		for(int i = 0; i < cut_num; i++){
			int from_top, num_of_cards;
			cin >> from_top >> num_of_cards;
			card = cut(card, from_top, num_of_cards);
		}

		itr = card.begin();
		for(int i = 0; i < num; i++){
			if(*itr == 1){
				top = i;
				break;
			}
			itr += 1;
		}
		cout << num - top << endl;

	}
	return 0;
}