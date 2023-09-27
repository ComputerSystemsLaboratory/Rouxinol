#include <iostream>
#include <string>
using namespace std;

int main(){
	int num_battle;
	int a, b;
	int point_a = 0;
	int point_b = 0;
	string cards;

	cin >> num_battle;
	
	for(; num_battle != 0;){
		while(num_battle > 0){
			cin >> a >> b;
			if(a == b){
				point_a += a;
				point_b += b;
			}else if(a > b){
				point_a += a + b;
			}else{
				point_b += a + b;
			}
			num_battle--;
		}
		cout << point_a << " " << point_b << endl;
		// initialize
		point_a = 0;
		point_b = 0;
		cin >> num_battle;
	}

	return 0;
}