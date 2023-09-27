#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin >> s;
	if(s.size()<=20){
		for(int i=s.size()-1;i>=0;i--){
			cout << s[i];
		}
		cout << endl;
	}
	return 0;
}