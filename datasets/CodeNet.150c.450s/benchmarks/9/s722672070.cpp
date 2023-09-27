#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string deck; 
	
	while(cin >> deck && deck != "-") {
		int n; cin >> n;
		int shuffle;

		while(n-- && cin >> shuffle)
			rotate(deck.begin(), deck.begin()+shuffle, deck.end());
		cout << deck << endl;
	}

	return 0;
}

