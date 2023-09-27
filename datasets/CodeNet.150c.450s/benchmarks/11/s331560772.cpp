#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

enum E_SUITS {
	S,
	H,
	C,
	D
};

int main(int argc, char** argv) {
	vector<tuple<char,int,bool>> deck;
	for(E_SUITS suit = S; suit <= D; suit=static_cast<E_SUITS>(suit+1)) {
		char s = ((suit==S)?'S':(suit==H)?'H':(suit==C)?'C':'D');
		for(int i = 1; i <= 52/4; ++i) {
			deck.push_back(tuple<char,int,bool>(s, i, false ));
		}
	}

	int cards_num;
	cin >> cards_num;

	for(int j = 0; j < cards_num; ++j) {
		pair<char, int> tmp_card;
		cin >> tmp_card.first >> tmp_card.second;
		E_SUITS s = ((tmp_card.first=='S')?S:(tmp_card.first=='H')?H:(tmp_card.first=='C')?C:D);
		deck[(s*52/4)+tmp_card.second-1] = make_tuple(tmp_card.first, tmp_card.second, true);	
	}

	for(auto v : deck)
		if(get<2>(v) == false) cout << get<0>(v) << " " << get<1>(v) << endl;

	return 0;
}