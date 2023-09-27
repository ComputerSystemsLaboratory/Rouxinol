#include<iostream>
#include <cstdio>
#include<cctype>
#include <algorithm>
#include<string>

using namespace std;

int main(){
	string w, t;
	int cnt = 0;
	
	cin >> w;
	transform(w.begin(), w.end(), w.begin(), ::toupper);
	
	while(cin >> t){
		if(t == "END_OF_TEXT") break;
		else transform(t.begin(), t.end(), t.begin(), ::toupper);
		
		if(t == w) cnt++;
	}
	cout << cnt << endl;

	return 0;
}