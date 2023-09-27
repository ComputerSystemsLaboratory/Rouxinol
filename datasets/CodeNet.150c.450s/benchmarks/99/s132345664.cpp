#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int mcxitonum(string s){
	int num = 0;
	char before = ' ';
	for (int i = 0;(unsigned) i < s.length(); i++){
		char now = s[i];
		int beforenum;
		if ('0' <= before && before <= '9'){
			beforenum = before - '0';
		}
		else{
			beforenum = 1;
		}
		if (now == 'm'){
			num += beforenum * 1000;
		}
		else if (now == 'c'){
			num += beforenum * 100;
		}
		else if (now == 'x'){
			num += beforenum * 10;
		}
		else if (now == 'i'){
			num += beforenum;
		}
		before = now;
	}
	return num;
}

string numtomcxi(int num){
	string s = "";
	stringstream ss;

	int m = num / 1000;
	if (m > 1){
		ss << m << "m";
		s += ss.str();
		ss.str("");
	}
	else if (m == 1){
		s += "m";
	}


	num = num % 1000;
	int c = num / 100;
	if (c > 1){
		ss << c << "c";
		s += ss.str();
		ss.str("");
	}
	else if (c == 1){
		s += "c";
	}

	num = num % 100;
	int x = num / 10;
	if (x > 1){
		ss << x << "x";
		s += ss.str();
		ss.str("");
	}
	else if (x == 1){
		s += "x";
	}

	num = num % 10;
	int i = num;
	if (i > 1){
		ss << i << "i";
		s += ss.str();
		ss.str("");
	}
	else if (i == 1){
		s += "i";
	}

	return s;

}


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
	string s1, s2;
	cin >> s1 >> s2;
	cout << numtomcxi(mcxitonum(s1) + mcxitonum(s2)) << endl;
	}
	return 0;
}