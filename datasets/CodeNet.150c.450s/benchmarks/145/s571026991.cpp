#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	map<string, int> word;
	int mfrec=0;
	string mfs, ls, in;
	while(cin>>in){
		if(word.count(in)==0) word[in]=0;
		word[in]++;
		if(mfrec<word[in]){
			mfrec=word[in];
			mfs=in;
		}
		if(ls.length()<in.length()) ls=in;
	}
	cout << mfs << " " << ls << endl;
	return 0;
}