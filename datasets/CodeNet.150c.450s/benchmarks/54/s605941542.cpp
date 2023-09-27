#include<iostream>
#include<string>
using namespace std;
int main(){
	int cnt = 0 , match = 0;
	string w,t[300];
	cin >> w;
	string tt;
	int a=0;
	while (cin >> tt, tt != "END_OF_TEXT"){
		t[a] = tt;
		a++;
	}
	for (int j = 0; j < a; j++){
		for (int i = 0; i < t[j].size(); i++){
			if (w.size() != t[j].size()){ break; }
			if (32+w[match] == t[j][i] || w[match] == t[j][i] || w[match] == t[j][i]+32){ match++; }
			else{ match = 0; }
			if (match == w.size()){ cnt++; match = 0;}
		}
		match = 0;
	}
	cout << cnt<<endl;
	return 0;
}
