#include<string>
#include<cstring>
#include<iostream>
using namespace std;

int main(){
	string S, P, S_twice;
	bool y_n = false;
	getline(cin,S);
	getline(cin,P);
	S_twice = S + S;
	int lenS, lenP, i;
	lenS = S.length();
	lenP = P.length();
	for(i=0;i<lenS;i++){
		if(strncmp(P.c_str(), S_twice.c_str(), lenP) == 0){
			y_n = true;
		}
		S_twice.erase(0, 1);
	}
	if(y_n == true){
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}
	return 0;
}