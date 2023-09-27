#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string word,order,rep_word,new_word;
	int times, start, end;
	
	cin >> word >> times;
	
	for(int i=0; i<times; ++i){
		cin >> order >> start >> end;
		if(order == "replace"){
			cin >> rep_word;
			word.replace(start, end-start+1, rep_word);
		}else if(order == "reverse"){
			reverse(word.begin()+start, word.begin()+end+1);
		}else{
			cout << word.substr(start, end-start+1) << endl;
		}
	}
	return 0;
}
