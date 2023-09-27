#include<iostream>
#include<set>
#include<string>
using namespace std;
#define rep(i, j) for(int i = 0; i < j; i++)

int main(){
	int N, M; cin >>N;
	int openFlg = 0;
	set<string> s;
	rep(i, N){
		string tmp; cin >>tmp;
		s.insert(tmp);
	}
	cin >>M;
	rep(i, M){
		string tmp; cin >>tmp;
		if(s.find(tmp) != s.end()){
			openFlg = (openFlg + 1) % 2;
			if(openFlg == 1) cout <<"Opened by ";
			else cout <<"Closed by ";
			cout <<tmp <<endl;
		} else{
			cout <<"Unknown " <<tmp <<endl;
		}
	}
	return 0;
}