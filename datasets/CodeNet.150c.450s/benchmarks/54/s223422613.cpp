#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
	string W, Ti;
	cin >> W;
	for (int i = 0; i < W.size(); i++){
		W[i] = tolower(W[i]);
	}

	int n = 0;

	while (1){
		cin >> Ti;
		if (Ti == "END_OF_TEXT") break;
		
		for (int j = 0; j < Ti.size(); j++){
			Ti[j] = tolower(Ti[j]);
		}
		if (Ti == W) n++;
	}

	cout << n << "\n";

	return 0;
}
