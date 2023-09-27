#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;

string Ascending(string s);
string Descending(string s);

int main(void){
	while(1){
		string a;
		int l;
		int cnt = 0;
		vector<string> seq;

		cin >> a >> l;
		if(l == 0) break;
	
		int size = a.size();
		for(int i=0; i< l - size; i++){
			a = '0' + a;
		}

		while(1){
			cnt++;
			string small, big;
			char tmp[100];
			seq.push_back(a);

			small = Ascending(a);
			big = Descending(a);

			sprintf(tmp, "%d", atoi(big.c_str()) - atoi(small.c_str()) );

			a = tmp;
			for(int i=0; i< l - a.size(); i++){
				a = '0' + a;
			}


			//cout << a << endl;
			
			vector<string>::iterator pos;
			pos = find(seq.begin(), seq.end(), a);
			if(pos != seq.end()){
				cout << pos - seq.begin();
				printf(" %d ", atoi(a.c_str()));
				cout << cnt - (pos - seq.begin()) << endl;
				break;	
			}
		}
	}

	return 0;
}

string Ascending(string s){
	for(int j=0; j<s.size() - 1; j++){
		for(int i=0; i<s.size() - 1; i++){
			if(s[i] > s[i+1]){
				char t = s[i+1];
				s[i+1] = s[i];
				s[i] = t;
			}
		}
	}

	return s;
}

string Descending(string s){
	for(int j=0; j<s.size() - 1; j++){
		for(int i=0; i<s.size() - 1; i++){
			if(s[i] < s[i+1]){
				char t = s[i+1];
				s[i+1] = s[i];
				s[i] = t;
			}
		}
	}

	return s;
}