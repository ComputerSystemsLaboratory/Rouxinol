#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(void){
	map<string, int> word;
	string instr, mfstr, maxl = "";
	int noo = 0;
	
	while(cin >> instr){
		if(word.find(instr) != word.end()){
			word[instr]++;
		}
		else{
			word.insert(pair<string, int>(instr, 1));
		}

		if(instr.size() > maxl.size())	maxl = instr;
	}

	map<string, int>::iterator p;
	for(p = word.begin(); p != word.end(); p++){
		if(noo < p->second){
			noo = p->second;
			mfstr = p->first;
		}
	}

	cout << mfstr << " " << maxl << endl;
  return 0;
}