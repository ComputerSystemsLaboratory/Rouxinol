#include <bits/stdc++.h>
using namespace std;

typedef pair<char, int> P;
vector<P> v;

char N2C(char num, int cnt){
	if(num == '1'){
		if(cnt % 5 == 1) return '.';
		else if(cnt % 5 == 2) return ',';
		else if(cnt % 5 == 3) return '!';
		else if(cnt % 5 == 4) return '?';
		else if(cnt % 5 == 0) return ' ';
	}
	else if(num == '2'){
		if(cnt % 3 == 1) return 'a';
		else if(cnt % 3 == 2) return 'b';
		else if(cnt % 3 == 0) return 'c';
	}
	else if(num == '3'){
		if(cnt % 3 == 1) return 'd';
		else if(cnt % 3 == 2) return 'e';
		else if(cnt % 3 == 0) return 'f';
	}
	else if(num == '4'){
		if(cnt % 3 == 1) return 'g';
		else if(cnt % 3 == 2) return 'h';
		else if(cnt % 3 == 0) return 'i';
	}
	else if(num == '5'){
		if(cnt % 3 == 1) return 'j';
		else if(cnt % 3 == 2) return 'k';
		else if(cnt % 3 == 0) return 'l';
	}
	else if(num == '6'){
		if(cnt % 3 == 1) return 'm';
		else if(cnt % 3 == 2) return 'n';
		else if(cnt % 3 == 0) return 'o';
	}
	else if(num == '7'){
		if(cnt % 4 == 1) return 'p';
		else if(cnt % 4 == 2) return 'q';
		else if(cnt % 4 == 3) return 'r';
		else if(cnt % 4 == 0) return 's';
	}
	else if(num == '8'){
		if(cnt % 3 == 1) return 't';
		else if(cnt % 3 == 2) return 'u';
		else if(cnt % 3 == 0) return 'v';
	}
	else if(num == '9'){
		if(cnt % 4 == 1) return 'w';
		else if(cnt % 4 == 2) return 'x';
		else if(cnt % 4 == 3) return 'y';
		else if(cnt % 4 == 0) return 'z';
	}
	else return 'A';
}

int main(){
	int n;
	cin >> n;
for(int i=0; i<n; i++){	
	
	string s;
	cin >> s;
	int len = s.size();
	
	int head = 0;
	for(int i=0; i < len; i++){
		if(s[i] == '0') head++;
		else break;
	}
	
	
	int body = -1;
	for(int i=head; i<len; i++){
		body++;
		if(s[i] == '0'){
			if(s[i-1] != '0'){
				v.push_back(P(s[i-1], body));
			}
			body = -1;
		}
	}
	
	for(int i=0; i<(int)v.size(); i++){
		if(N2C(v[i].first, v[i].second) == 'A') continue;
		else cout << N2C(v[i].first, v[i].second);
	}
	cout << endl;
	
	v.clear();
	//debug
	/*
	for(int i=0; i<(int)v.size(); i++){
		cout << v[i].first << " " << v[i].second << endl;
	}
	*/
	
}//end	
	
	return 0;
}
