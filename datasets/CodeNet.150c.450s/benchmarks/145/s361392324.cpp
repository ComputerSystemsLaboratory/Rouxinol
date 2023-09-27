#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){
	map<string, int> word;
	vector<string> w;
	string str;
	int max=0,length=0;

	while(cin >> str){
			
		w.push_back(str);
		
		//??\???????????????????????§??????????????¢???
		if(word.find(str) != word.end() ){
			word[str]++;
		}else{
			word.insert( pair<string, int>(str,1));
		}
	}
	
	map<string,int>::iterator p;
	for(p = word.begin() ; p != word.end() ; p++){
		if( max < p->second) max = p->second;
	}
	for(p = word.begin() ; p != word.end() ; p++){
		if( max == p->second){
			cout << p->first << " ";
			break;
		}
	}
	for(int i=0 ; i<w.size() ; i++){
		if( length < w[i].size() ) length = w[i].size();
	}
	for(int i=0 ; i<w.size() ; i++){
		if( length==w[i].size() ){
			cout << w[i] << endl;
			break;
		}
	}
}