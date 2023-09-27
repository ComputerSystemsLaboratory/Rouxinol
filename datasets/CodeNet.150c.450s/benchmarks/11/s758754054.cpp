#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define CARD_ALL 52
using namespace std;
int main(){
	int N,conversion=0;
	int num;
	string type;
	cin >> N;
	vector<int> cards(CARD_ALL,0);
	for(int i=0;i<N;i++){
		cin >> type >> num;
		if(type == "S") conversion = num;
		if(type == "H") conversion = num+13;
		if(type == "C") conversion = num+26;
		if(type == "D") conversion = num+39;
		for(int j=1; j<=CARD_ALL; j++){
			if(j == conversion) cards[j] = conversion;
		}
	}
	for(int i=1;i<=cards.size();i++){
		if(cards[i]==0){
			if(0 < i && i < 14) cout << "S " << i << endl;
			else if(14 <= i && i < 27) cout << "H " << i-13 << endl;
			else if(27 <= i && i < 40) cout << "C " << i-26 << endl;
			else cout << "D " << i-39 << endl;
		}
	}
}