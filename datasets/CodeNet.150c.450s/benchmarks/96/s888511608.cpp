#include <bits/stdc++.h>

using namespace std;

int main(void){
	vector<vector<string>> moji{
		{}, 
		{".",",","!","?"," "},
		{"a","b","c"},
		{"d","e","f"},
		{"g","h","i"},
		{"j","k","l"},
		{"m","n","o"},
		{"p","q","r","s"},
		{"t","u","v"},
		{"w","x","y","z"}
	};

	int num;
	cin >> num;
	for(int i = 0; i < num; i++){
		int count = 0;
		string str;
		cin >> str;
		string one = "0";

		for(int j = 0; j < str.size(); j++){
			if(str[j] == '0'){
				if(one != "0"){
					count--;
					cout << moji[stoi(one)][count % moji[stoi(one)].size()];
				}
				one = str[j];
				count = 0;
			}else{
				one = str[j];
				count++;
			}
		}
		cout << endl;
	}
	return 0;
}