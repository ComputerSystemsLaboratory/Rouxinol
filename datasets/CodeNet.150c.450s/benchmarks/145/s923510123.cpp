#include<iostream>
#include<vector>
#include<map>
#include<string>

using namespace std;

int main(void){
	string s;
	int length=0,max=0;
	map<string,int> sen;
	vector<string> w;
	while(cin >>s){
		w.push_back(s);
		if(sen.find(s)!=sen.end()){
			sen[s]++;
		}else{
			sen.insert( pair<string, int>(s,1));
		}
	}
	map<string,int>::iterator p;
	for(p = sen.begin() ; p !=sen.end() ; p++){
		if( max < p->second) max = p->second;
	}
	for(p = sen.begin() ; p !=sen.end() ; p++){
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
    return 0;
}