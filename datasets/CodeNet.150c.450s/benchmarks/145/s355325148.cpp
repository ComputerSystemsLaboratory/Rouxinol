#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){
	// word[s] Å ¶ñsÌo»ñªÔÁÄ­é
	map<string, int> word;
	vector<string> v;
	string s;

	while( cin >> s ){
		v.push_back(s);
		
		//üÍµ½Pêª·ÅÉ é©T·
		if( word.count(s) ){
			word[s]++;
		}else{
			word[s] = 1;
		}
	}
	// ÅpoÌPêð²×é
	int mode=0;
	for(int i=0 ; i < v.size() ; i++ ){
		mode = max( mode , word[ v[i] ] );
	}
	for(int i=0 ; i < v.size() ; i++ ){
		if( mode == word[ v[i] ] ){
			cout << v[i];
			break;
		}
	}
	// Å·ÌPêðßé
	int length = 0;
	for(int i=0 ; i < v.size() ; i++ ){
		length = max( length , (int)v[i].size() );
	}
	for(int i=0 ; i < v.size() ; i++ ){
		if( length == v[i].size() ){
			cout << " " << v[i] << endl;
		}
	}
}