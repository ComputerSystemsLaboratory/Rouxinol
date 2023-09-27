#include <iostream>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <sstream>
#include <string>

using namespace std;
int main(){

	string s,S;
	int cnt = 0;
	getline(cin,s);
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	while(getline(cin,S) && S!= "END_OF_TEXT"){
		stringstream ss;
		ss<<S;
		string w;
		while(ss>>w){
			for(int i = 0; i < w.size(); i++){
				w[i] = tolower(w[i]);
			}
			if ( w == s){
				cnt++;
			}
		}
	}
	cout <<cnt <<endl;
	return 0;
}