#include <iostream>
#include <vector>
#include <string>
#include <utility>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::swap;
using std::string;

class card {
	public:
		card(string s) {
			suit = s[0];
			num = s[1];
		}
		char suit;
		char num;
		bool operator<(const card& e) const {
			if(num == e.num) return suit < e.suit;
			return num < e.num;
		}
		bool operator==(const card& e) const {
			return suit == e.suit && num == e.num;
		}
		bool operator!=(const card& e) const {
			return suit != e.suit || num != e.num;
		}
};

vector<card> bubble,selection;

int main(void) {
	string s;
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) {
		cin >> s;
		bubble.push_back(card(s));
		selection.push_back(card(s));
	}
	for(int i = 0;i < n;i++) {
		for(int j = n-1;j > i;j--){
			if(bubble[j].num < bubble[j-1].num)
				swap(bubble[j],bubble[j-1]);
		}
	}
	for(int i = 0;i < n;i++) {
		int minj = i;
		for(int j = i;j < n;j++) {
			if(selection[j].num < selection[minj].num)
				minj = j;
		}
		swap(selection[minj],selection[i]);
	}
	bool sstable = true;
	for(int i = 0;i < n;i++) {
		if(selection[i] != bubble[i]) sstable = false;
	}
	for(int i = 0;i < n-1;i++) cout << bubble[i].suit << bubble[i].num << " ";
	cout << bubble[n-1].suit << bubble[n-1].num << endl << "Stable" << endl;
	for(int i = 0;i < n-1;i++) cout << selection[i].suit << selection[i].num << " ";
	cout << selection[n-1].suit << selection[n-1].num << endl;
	if(sstable) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
}


