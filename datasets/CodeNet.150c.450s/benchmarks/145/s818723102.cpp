#include <iostream>
#include <map>
#include <string>
using namespace std;

map <string, int> dic;

string lowerword(string word){
    for (int i=0; i<(int)word.size(); i++)
        word[i] = tolower(word[i]);
    return word;
}

int main(void){

	while (true){
		string s;
		cin>>s;
		if (cin.eof()) break;
		dic[lowerword(s)]++;
	}

	int l=0, m=0, tmp;
	string w1, w2;
	map <string, int> ::iterator it=dic.begin();
	while (it!=dic.end()){
		tmp = (*it).second;
		if (tmp>m){
			m = tmp;
			w1 = (*it).first;
		}
		tmp = (*it).first.size();
		if (tmp>l){
			l = tmp;
			w2 = (*it).first;
		}
		it++;
	}
	cout<<w1<<" "<<w2<<endl;
	return 0;
}