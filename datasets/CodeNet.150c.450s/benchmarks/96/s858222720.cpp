#include <iostream>
#include <cstring>
using namespace std;

char a[5] = {'.', ',', '!', '?', ' '};

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string str;
		cin >> str;
		int t = 0, s = -1;
		for(int j = 0; j < str.size(); j++){
			if(str[j] == '0'){
				if(t == 0) continue;
				if(t == 1){
					s %= 5;
					cout << a[s];
				} else if(t <= 6){
					char o = 'a';
					s %= 3;
					o += s + 3*(t-2);
					cout << o;
				} else if(t == 7){
					char o = 'a';
					s %= 4;
					o += s+3*(t-2);
					cout << o;
				} else if(t == 8){
					char o = 'a';
					s %= 3;
					o += s+19;
					cout << o;
				} else{
					char o = 'a';
					s %= 4;
					o += s+22;
					cout << o;
				}
				t = 0;
				s = -1;
			} else{
				t = str[j]-'0';
				s++;
			}
		}
		cout << endl;
	}
}