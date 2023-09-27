#include<iostream>
#include<string>
#define REP(i,n) for(int i=0;i<(n);++i)
using namespace std;

int main(){
	string s;
	int m,h;

	while(cin >>s){
		if(s=="-") break;
		cin >>m;
		REP(i,m){
			cin >>h;
			s = s.substr(h) + s.substr(0,h);
		}
		cout <<s << endl;
	}
	return 0;
}