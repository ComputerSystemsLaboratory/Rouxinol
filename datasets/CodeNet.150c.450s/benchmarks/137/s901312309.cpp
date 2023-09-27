#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

const long M = 1046527;
const long NIL = -1;
const long L = 14;

string H[M];

long getChar(char ch){
	if (ch == 'A') return 1;
	else if (ch == 'C') return 2;
	else if (ch == 'G') return 3;
	else if (ch == 'T') return 4;
	else return 0;
}

long long getKey(string str){
	long long sum = 0, p = 1, i;
	for (long i = 0; i < str.size(); i++){
		sum += p * (getChar(str[i]));
		p *= 5;
	}
	return sum;
}

long h1(long key){return key % M;}
long h2(long key){return 1 + (key % (M - 1));}

long find(string str){
	long long key, h;
	key = getKey(str);
	for (long i = 0; ; i++){
		h = (h1(key) + i * h2(key)) % M;
		if (H[h] == str) return 1;
		else if (H[h].size() == 0) return 0;
	}
	return 0;
}

long insert(string str){
	long long key, h;
	key = getKey(str);
	for (long i = 0; ; i++){
		h = (h1(key) + i * h2(key)) % M;
		if (H[h] == str) return 1;
		else if (H[h].size() == 0){
			H[h] = str;
			return 0;
		}
	}
	return 0;
}

int main(){
	long n, h;
	string str, com(9, 'a');
	cin >> n;
	for (long i = 0; i < n; i++){
		cin >> com >> str;
		if (com[0] == 'i') insert(str);
		else {
			if (find(str)) cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
	return 0;
}