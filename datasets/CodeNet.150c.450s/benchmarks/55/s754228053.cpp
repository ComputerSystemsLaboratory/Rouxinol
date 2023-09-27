#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	std::string Number;
	cin >> Number;
	while(Number[0] != '0' || Number.size() > 1){
		int Count = 0;
		vector<int> number;
		for(int i = 0; i < Number.size(); i++){
			if(Number[i] == '0') number.push_back(0);
			if(Number[i] == '1') number.push_back(1);
			if(Number[i] == '2') number.push_back(2);
			if(Number[i] == '3') number.push_back(3);
			if(Number[i] == '4') number.push_back(4);
			if(Number[i] == '5') number.push_back(5);
			if(Number[i] == '6') number.push_back(6);
			if(Number[i] == '7') number.push_back(7);
			if(Number[i] == '8') number.push_back(8);
			if(Number[i] == '9') number.push_back(9);
			Count += number[i];
		}
		cout << Count << endl;
		cin >> Number;
	}
	return 0;
}