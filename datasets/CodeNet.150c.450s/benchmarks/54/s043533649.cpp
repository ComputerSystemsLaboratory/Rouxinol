#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
	int n = 0;
	string W, T;
	cin >> W;
	for(int j = 0; j < W.size(); j++){
		W[j] = tolower(W[j]);
	}
	while(1){
		cin >> T;
		if(T == "END_OF_TEXT") break;
		for(int i = 0; i < T.size(); i++){
			T[i] = tolower(T[i]);
		}
		if(T == W){
			n = n + 1;
		}
	}
	cout << n << endl;

	return 0;
}