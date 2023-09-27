#include<iostream>
#include<string>
using namespace std;

string print(string s, int a, int b){
	return s.substr(a, b - a + 1);
}

string reverse(string s, int a, int b){
	string news = s;
	for (int i = 0; i < b - a + 1; i++){
		news[b - i] = s[a + i];
	}
	return news;
}

string replace(string s, int a, int b, string p){
	return s.replace(a, b - a + 1, p);
}

int main()
{
	string str, command;
	int q;
	cin >> str;
	cin >> q;
	for (int i = 0; i < q; i++){
		cin >> command;
		int a, b;
		cin >> a >> b;
		string p;
		if (command == "print"){
			cout << print(str, a, b) << endl;
		}
		else if (command == "reverse"){
			str = reverse(str, a, b);
		}
		else if (command == "replace"){
			cin >> p;
			str = replace(str, a, b, p);
		}
	}
	return 0;
}