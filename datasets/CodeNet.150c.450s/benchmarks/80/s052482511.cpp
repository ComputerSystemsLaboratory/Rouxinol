#include<iostream>
using namespace std;
int main(){
	int A=0,B=0;
	int score;
	for(int i=0; i<4; i++){
		cin >> score;
		A+=score;
	}
	for(int i=0; i<4; i++){
		cin >> score;
		B+=score;
	}
	score = max(A,B);
	cout << score << endl;
}