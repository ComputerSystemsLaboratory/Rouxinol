#include<iostream>
#include<cmath>
#include<string>

using namespace std;

struct GamePoints {
	int points;
};

int main() {
	
	GamePoints Taro, Hanako;
	int n;
	
	while( cin >> n) {
		
		string card_1, card_2;
		
		Taro.points = 0;
		Hanako.points = 0;
		
		for(int i=0;i<n;i++) {
			
			cin >> card_1 >> card_2;
			
			if(card_1 == card_2 ) 
			Taro.points++, Hanako.points++;
			
			else if(card_1 > card_2 ) 
			Taro.points += 3;
			
			else
			Hanako.points += 3;
	}
		cout << Taro.points << " " << Hanako.points << "\n";
	}

	return 0;
}
