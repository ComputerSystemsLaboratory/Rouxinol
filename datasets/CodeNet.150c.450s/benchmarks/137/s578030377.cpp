#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

const int M = 1046527;
const char data[] = {'A', 'C', 'G', 'T'};
string H[M];

int getChar(char ch){
	for(int i = 0; i < 4; ++i){
		if(ch == data[i]) return i + 1;
	}
	return 0;
}

ll getKey(string str){
	ll sum = 0;
	ll p = 1;
	for(size_t i = 0; i < str.size(); ++i){
		sum += p * (getChar(str[i]));
		p *= 5;
	}
	return sum;
}

int h1(int key){
	return key % M;
}

int h2(int key){
	return 1 + (key % (M - 1));
}

int find(string str){
	ll key = getKey(str);
	ll i = 0;
	while(1){
		ll h = (h1(key) + i * h2(key)) % M;
		if(H[h] == str){
			return 1;
		}
		else if(H[h].size() == 0){
			return 0;
		}
		++i;
	}
	return 0;
}

void insert(string str){
	ll key = getKey(str);
	ll i = 0;
	while(1){
		ll h = (h1(key) + i * h2(key)) % M;
		if(H[h] == str){
			return;
		}
		else if(H[h].size() == 0){
			H[h] = str;
			return;
		}
		++i;
	}
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i){
		string s1, s2;
		cin >> s1 >> s2;

		if(s1 == "insert"){
			insert(s2);
		}
		else {
			cout << (find(s2) ? "yes" : "no") << endl;
		}
	}

	return 0;
}