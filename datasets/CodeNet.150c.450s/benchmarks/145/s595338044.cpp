#include <map>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
using namespace std;


int main(){
    map<string, int> m;
    string s;

    while (cin >> s){
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	map<string, int>::iterator i = m.find(s);
	if (i == m.end()) m.insert(pair<string, int>(s, 1));
	else (*i).second++;
    }
    pair<string, int> freq("", 0);
    string len = "";
    for (map<string, int>::iterator i = m.begin(); i != m.end(); i++){
	if ((*i).first.size() > len.size()) len = (*i).first;
	if ((*i).second > freq.second){
	    freq.first = (*i).first;
	    freq.second = (*i).second;
	}
    }

    cout << freq.first << " " << len << endl;
}