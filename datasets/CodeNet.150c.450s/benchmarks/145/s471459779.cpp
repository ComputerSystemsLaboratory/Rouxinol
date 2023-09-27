#include<iostream>
#include<vector>
#include<string>
#include<cstring>
using namespace std;

int main(){
	string str;
	string max_len_str;
	string most_many_str;
	int most=-1;
	int i;
	vector<pair<string, int> > v;
	string::iterator vi;
	cin>>str;
	v.push_back(pair<string, int>(str, 0));
	max_len_str == v[0].first;
	while(cin>>str){
		for(i=0;i<v.size();i++){
			if(v[i].first == str){
				v[i].second++;
				break;
			}
		}
		if(i==v.size()){
			if(max_len_str.size() < strlen(str.c_str())){
				max_len_str = str;
			}
			v.push_back(pair<string, int>(str, 0));
		}
	}
	for(i=0;i<v.size();i++){
		if(most < v[i].second){
			most = v[i].second;
			most_many_str = v[i].first;
		}
	}
	cout << most_many_str << " " << max_len_str << endl;
	
	return 0;
}