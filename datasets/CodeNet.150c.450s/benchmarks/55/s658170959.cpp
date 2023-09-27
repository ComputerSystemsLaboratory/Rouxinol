#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	string Number;
	cin >> Number;
	while(Number[0] != '0' || Number.size() > 1){
		int Count = 0;
		vector<int> number;
		for(int i = 0; i < Number.size(); i++){
			for(int j = 0; j < 10; j++){
				if(Number[i] == '0' + j) number.push_back(j);
			}
			Count += number[i];
		}
		cout << Count << endl;
		cin >> Number;
	}
	return 0;
}