#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> cards;
	vector<int> shuffuleCards;
	vector<int> ::iterator cardsIterator;
	vector<int> ::iterator shuffuleIterator;
	int n,r,p,c;

	while(cin >> n >> r, n && r){
		cards.clear(); //?????????
		// ?????????????±±??????
		for (int i = 0; i < n; ++i){
			cards.push_back(i+1);
		}
		// ?????£?????????
		while(cin >> p >> c, r--){
			cardsIterator = cards.end();
			cardsIterator -= p + (c - 1);
			while(c--){
				cards.push_back(*cardsIterator);
				cards.erase(cardsIterator);
			}
			if (r == 0){
				break;
			}
		}
		// ???????????????????????¨???
		cout << cards.back() << endl;
	}
}