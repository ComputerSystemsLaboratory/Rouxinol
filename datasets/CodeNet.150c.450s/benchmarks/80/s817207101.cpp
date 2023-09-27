#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int score;
	int total_a = 0, total_b = 0;
	for(int i=0; i < 4; i++){
		cin >> score;
		total_a += score;
	}
	for(int i=0; i < 4; i++){
		cin >> score;
		total_b += score;
	}
	cout << max(total_a, total_b) << endl;
}