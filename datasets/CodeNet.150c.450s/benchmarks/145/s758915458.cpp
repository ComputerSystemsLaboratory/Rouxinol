#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main(){
	string word, lword, rword;
	cin >> word;
	lword = word;
	rword = word;
	int count = 0;
	map<string, int> data;
	data[rword] = 1;

	while(cin >> word){
		if(lword.size() < word.size()) lword = word;
		data[word]++;
		if(data[word] > count){
			rword = word;
			count = data[word];
		}
	}
	cout << rword << " " << lword << endl;
	

}