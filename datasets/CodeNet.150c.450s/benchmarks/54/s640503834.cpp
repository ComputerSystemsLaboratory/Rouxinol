#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	string sentence;
	int count=0,i;
	getline(cin,word);
	while(1) {
		cin >> sentence;
		if(sentence=="END_OF_TEXT") break;
		if(sentence[(int)sentence.length()-1]=='.') {
			sentence.pop_back();
		}
		if(sentence.length()==word.length()) {
			for(i=0;i<(int)sentence.length();++i) {
				if(sentence[i]!=word[i]&&sentence[i]+'a'-'A'!=word[i]&&sentence[i]-'a'+'A'!=word[i]) break;
			}
			if(i==(int)sentence.length()) ++count;
		}
	}
	cout << count << endl;
	return 0;
}