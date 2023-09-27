#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	map<string, int> letters;
	string in;
	while(cin>>in){
		if(letters.count(in) == 0) letters.insert(make_pair(in, 0));
		else letters.find(in)->second++;
	}

	int maxChar = 0;
	int maxLength = 0;
	map<string, int>::iterator it, foo, bar;
	for(it=letters.begin(); it!=letters.end(); it++){
		maxChar = max(maxChar, it->second);
		if(maxChar == it->second) foo = it;
	}
	for(it=letters.begin(); it!=letters.end(); it++){
		maxLength = max(maxLength, (int)it->first.size());
		if(maxLength == it->first.size()) bar = it;
	}

	cout<<foo->first<<" "<<bar->first<<endl;
	return 0;
}