#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string shuffle(string str,int h){
	string head = str.substr(0, h);
	string tail = str.substr(h, str.size() - h);
	return tail + head;
}

int main()
{
	string cards;
	int m, h;

	while (1) {
		cin >> cards;
		if (cards=="-")break;

		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> h;
			cards = shuffle(cards, h);
		}
		cout << cards << endl;
	}
    return 0;
}
