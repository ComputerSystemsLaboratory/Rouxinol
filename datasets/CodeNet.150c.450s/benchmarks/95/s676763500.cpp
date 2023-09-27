#include <iostream>
#include <array>
#include <string>

using namespace std;

int main(){
	int n;
	while(cin >> n,n){
		bool l = false,r = false;
		bool t = true;
		int ret = 0;
		for(int i=0;i<n;i++){
			string s;
			cin >> s;
			if(s == "ru") r = true;
			if(s == "rd") r = false;
			if(s == "lu") l = true;
			if(s == "ld") l = false;
			if(r == t && l == t){
				ret++;
				t = !t;
			}
		}
		cout << ret << endl;
	}
	return 0;
}