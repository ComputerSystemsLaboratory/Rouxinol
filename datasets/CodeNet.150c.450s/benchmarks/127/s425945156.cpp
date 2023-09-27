#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

bool checker[2000000];

string str_rev(string str){
	string s, dum;
	s = "";
	for(int i = 0; i < str.size(); i++){
		dum = "D";
		dum[0] = str[i];
		s = dum + s;
	}
	return s;
}

string str_make(string str1, string str2, int i, int j, int k){
	if(i == 1){
		str1 = str_rev(str1);
	}
	if(j == 1){
		str2 = str_rev(str2);
	}
	if(k == 0){
		return str1 + str2;
	}
	return str2 + str1;
}

int main(){
	int n;
	cin >> n;
	for(int loop = 1; loop <= n; loop++){
		string str, str1, str2, str_add;
		string str_list[1000];
		int index = 0;
		cin >> str;
		for(int num = 1; num < str.size(); num++){
			str1 = str.substr(0, num);
			str2 = str.substr(num);
			for(int i = 0; i <= 1; i++){
				for(int j = 0; j <= 1; j++){
					for(int k = 0; k <= 1; k++){
						str_add = str_make(str1, str2, i, j, k);
						bool checker = true;
						for(int ID = 0; ID < index; ID++){
							if(str_add == str_list[ID]){
								checker = false;
								break;
							}
						}
						if(checker){
							str_list[index] = str_add;
							index++;
						}
					}
				}
			}
		}
		printf("%d\n", index);
	}
	return 0;
}