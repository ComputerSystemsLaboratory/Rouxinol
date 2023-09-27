#include <bits/stdc++.h>
using namespace std;

int main(){

	int n; cin >> n;
	string T;
	string H;
	int T_score=0;
	int H_score=0;

	for(int i=0; i<n; i++){
		cin >> T >> H;
		if(T>H)
			T_score += 3;
		else if(T<H)
			H_score += 3;
		else{
			T_score ++;
			H_score ++;
		}
	}
	cout << T_score << " " << H_score << endl;
	return 0;
}