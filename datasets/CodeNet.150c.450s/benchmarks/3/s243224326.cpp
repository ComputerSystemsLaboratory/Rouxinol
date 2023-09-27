#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string str;
	int n;
	string command, rep;
	int a,b,p=0;
	
	cin >> str >> n;
	for (int i=0; i<n; i++){
		cin >> command >> a >> b ;
		p=b-a+1;
		if (command=="replace") {
			cin >> rep;
			str=str.replace(a, p, rep);
		}
		if (command=="reverse"){
			string sub,ins;
			sub=str.substr(a, p);
			ins="";
			for (int k=0; k<p; k++){
				ins+=sub[b-a-k];
			}
			str=str.replace(a, p, ins);
		}
		if (command=="print") cout << str.substr(a, p) << endl;
	}
	return 0;
}