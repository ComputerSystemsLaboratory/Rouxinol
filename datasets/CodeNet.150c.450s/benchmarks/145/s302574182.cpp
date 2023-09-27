#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	vector<string> vs;
	map<string, int> msi;
	string s;
	string::size_type max_length = 0;
	while(cin >> s){
		max_length = max(max_length, s.size());
		vs.push_back(s);
		msi[s]++;
	}
	int max_f = 0;
	for(vector<string>::iterator iter = vs.begin();
		iter != vs.end(); iter++)
	{
		max_f = max(max_f,msi[*iter]);
	}
	for(vector<string>::iterator iter = vs.begin(); 
		iter != vs.end(); iter++)
	{
		if(msi[*iter] == max_f){
			cout << *iter << " ";
			break;
		}
	}
	for(vector<string>::iterator iter = vs.begin();
		iter != vs.end(); iter++)
	{
		if((*iter).size() == max_length){
			cout << *iter << endl;
		}
	}
	return 0;
}