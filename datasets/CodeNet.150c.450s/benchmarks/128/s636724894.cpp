#include <bits/stdc++.h>
using namespace std;

int main(void){
	string str;
	cin >> str;
	for(int i=static_cast<int>(str.size())-1;i>=0;i--)
		cout << str.at(i);
	cout << endl;
}