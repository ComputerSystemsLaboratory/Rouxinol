#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main(){
	int t = 0;
	while(cin >> t){
		if(t == 0) break;
		int score1 = 0;
		int score2 = 0;
		while(t > 0){
			t --;
			int card1;
			int card2;
			cin >> card1;
			cin >> card2;
			if(card1 > card2)
				score1 += card1 + card2;
			else if (card1 < card2)
				score2 += card1 + card2;
			else{
				score1 += card1;
				score2 += card2;
			}
			
		}
		cout << score1 << " " << score2 << endl;
	}
}