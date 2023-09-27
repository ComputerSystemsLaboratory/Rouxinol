#include <unordered_set>
#include <string>
#include <iostream>
using namespace std;
int main(){
	unordered_set<string> A;
	int counter;
	string order, word;
	cin >> counter;
	for (int i = 0; i < counter; i++){
		cin >> order;
		if(order == "insert"){
			cin >> word;
			A.insert(word);
		}
		else if(order == "find"){
			cin >> word;
			if(A.count(word) == 0)
				cout << "no" << endl;					
			else
				cout << "yes" << endl;
		}
	}
}