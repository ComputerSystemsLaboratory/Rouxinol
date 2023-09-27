#include <iostream>
using namespace std;

int main(){
	int n, card1, card2, p1, p2;
	while(cin >> n, n != 0){
		p1 = 0;
		p2 = 0;
		for(int i = 0; i < n; i++){
			cin >> card1 >> card2;
			if(card1 < card2){
				p2 += card1+card2;
			}
			else if(card1 > card2){
				p1 += card1+card2;
			}
			else if(card1 == card2){
				p1 += card1;
				p2 += card2;
			}
		}
		
		cout << p1 << ' ' << p2 << endl;
	}
	return 0;
}