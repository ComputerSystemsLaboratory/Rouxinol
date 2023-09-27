#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
	unordered_set<string> S;
	string word;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {	
		cin >> word;
		if (word == "insert"){
			cin >> word;
			S.insert(word);
		}
		else if (word == "find"){
			cin >> word;
			cout << ((S.count(word) > 0) ? "yes" : "no") << endl;
		}
	}
}