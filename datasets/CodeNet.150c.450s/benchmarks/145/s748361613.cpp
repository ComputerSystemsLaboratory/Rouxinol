#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string str;
	string word[1000];
	int rate[1000], kind = 0;
	int M_leng = 0, mode;
	string res_mod, res_len;
	bool new_word;
	
	for(int i = 0; i < 1000; i++) rate[i] = 0;
	while((cin >> str)){
		new_word = true;
		for(int i = 0; i < kind; i++){
			if(str == word[i]){
				new_word = false;
				rate[i]++;
				break;
			}
		}
		
		if(new_word){
			word[kind] = str;
			rate[kind]++;
			kind++;
		}
	}
	
	mode = 0;
	for(int i = 0; i < kind; i++){
		if(mode < rate[i]){
			res_mod = word[i];
			mode = rate[i];
		}
		if(M_leng < word[i].size()){
			res_len = word[i];
			M_leng = word[i].size();
		}
	}
	
	cout << res_mod << " " << res_len << endl;
	
	return 0;
}