#include<iostream>
#include<string>
#include<map>
#include<cctype>
using namespace std;
int main(){
	map<string, int> mpa;
	string most_frequent_word, longest_word;
	string s;
	int max_frequency = 0, max_length = 0;
	while(cin >> s){
		if(s.length() > max_length){
			max_length = s.length();
			longest_word = s;
		}
		for(int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
		mpa[s]++;
	}
	map<string, int>::iterator itr;
	for(itr = mpa.begin(); itr != mpa.end(); itr++){
		if(itr -> second > max_frequency){
			max_frequency = itr -> second;
			most_frequent_word = itr -> first;
		}
	}
	cout << most_frequent_word << ' ' << longest_word << endl;
	return 0;
}
