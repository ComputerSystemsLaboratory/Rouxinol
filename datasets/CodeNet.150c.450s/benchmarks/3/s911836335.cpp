#include<iostream>
#include<string>
using namespace std;
 

	void printf(string str,int a, int b){
		cout << str.substr( a,b-a+1) << "\n"; //????????????????????????????????????????????????????????????????????§???????????????????????????
	}

	string reverse(string str,int a, int b ){
		string t = str;
		for(int i=a; i<=b; i++){
			str[i] = t[b+a-i];
		}
		return str;
	}


	string replace(string str,int a, int b,string x){
		for(int i=a; i<=b; i++){
			str[i] = x[i-a];
		}
		return str;
	}




int main() {
	string str;
	int q;
	cin >> str >> q;

	for(int i=0; i<q; i++){
		int a,b;
		string command,x;
		cin >> command;

		if( command == "print" ){
			cin >> a >> b ;
			printf(str,a,b);
		}
		if( command == "reverse" ){
			cin >> a >> b;
			str = reverse(str,a,b);
		}
		if( command == "replace" ){
			cin >> a >> b >> x;
			str = replace(str,a,b,x);
		}
	}

	return 0;
}