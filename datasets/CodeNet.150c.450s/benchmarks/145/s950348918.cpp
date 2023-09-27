#include<string>
#include<iostream>
#include<vector>
using namespace std;

int main() {
	//??£?¨?
	int most_views = 0,views=0,most_long=0,len=0;
	char tmp_sentence[1000];
	string sentence,mo_ma_word,longest_word,word="";
	vector<string> words;

	cin.getline(tmp_sentence, sizeof(tmp_sentence));
	sentence = tmp_sentence;
	for (int i = 0; i < sentence.size(); i++) {
		if (sentence[i] == ' ') { words.push_back(word); word = ""; }
		else word = word + sentence[i];
	}
	words.push_back(word);
	for (int i = 0; i < words.size(); i++) {
		for (int j = 0; j < words.size(); j++) {
			if (words[i] == words[j])views++;
		}
		if (most_views < views) {
			most_views = views;
			mo_ma_word = words[i];
		}
		views = 0;
	}
	for (int i = 0; i < words.size(); i++) {
		if (most_long < words[i].size()) {
			most_long = words[i].size();
			longest_word = words[i];
		}
	}
	cout << mo_ma_word <<' '<<longest_word<<endl;
}