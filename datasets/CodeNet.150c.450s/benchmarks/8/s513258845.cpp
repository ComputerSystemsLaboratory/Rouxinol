#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin >> n;
	int taroScore = 0, hanakoScore = 0;
	string taroCard, hanakoCard;
	for(int i = 0; i < n; i++){
		cin >> taroCard >> hanakoCard;
		if(taroCard > hanakoCard){
			taroScore += 3;
		}
		else if(taroCard < hanakoCard){
			hanakoScore += 3;
		}
		else{
			taroScore++; hanakoScore++;
		}
	}
	cout << taroScore << " " << hanakoScore << endl;

	return 0;
}