#include <iostream>
#include <string>
using namespace std;

string replace(string str)
{
	int a, b;
	string p;
	cin >> a >> b >> p;
	for(int i = 0; i <= b-a; ++i){
		str[a+i] = p[i];
	}
	return str;
}
string reverse(string str)
{
	int a, b;
	cin >> a >> b;
	string result = str;
	for(int i = 0; i <= b-a; i++){
		result[a+i] = str[b-i];
	}
	return result;
}
string print(string str)
{
	int a, b;
	cin >> a >> b;
	for(int i = 0; i <= b-a; i++){
		cout << str[a+i];
	}
	cout << endl;
	return str;
}

string execCommand(string command, string str)
{
	if(command == "replace") return replace(str);
	if(command == "reverse") return reverse(str);
	if(command == "print")   return print(str);
}
int main()
{
	string str;
	int q;
	cin >> str >> q;
	for(int i = 0; i < q; i++){
		string command;
		cin >> command;
		str = execCommand(command, str);
	}
	return 0;
}