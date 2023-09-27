#include <bits/stdc++.h>
using namespace std;
const int M = 1046527;
string sq[M];

int getChar(char c)
{
	switch(c){
		case 'A' : return 1;
		case 'T' : return 2;
		case 'C' : return 3;
		case 'G' : return 4;
	}
	return 0;
}

int getKey(string s)
{
	int sum = 0;
	int p = 1;
	for(int i = 0; i < s.size(); i++){
		sum += p*getChar(s[i]);
		p *= 5;
	}
	return sum;
}

int h1(int k){
	return k % M;
}

int h2(int k){
	return 1 + ( k % (M-1));
}

int find(string s)
{
	int key = getKey(s);
	for(int i = 0; ; i++){
		int h = (h1(key) + i*h2(key))%M;
		if(sq[h] == s) return 1;
		else if(sq[h] == "") return 0;
	}
}

int insert(string s)
{
	int key = getKey(s);
	for(int i = 0;; i++){
		int h = (h1(key) + i*h2(key))%M;
		if(sq[h] == s) return 1;
		else if(sq[h] == ""){
			sq[h] = s;
			return 0;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	while(n--){
		string s1, s2;
		cin >> s1 >> s2;
		if(s1[0] == 'f'){
			if(find(s2))
				cout << "yes" << endl;
			else
				cout << "no" << endl;
		}
		else{
			insert(s2);
		}
	}

	return 0;
}