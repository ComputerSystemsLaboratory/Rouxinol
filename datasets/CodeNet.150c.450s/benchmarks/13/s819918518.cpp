#include <iostream>
#include <string>
using namespace std;

int main(){
		string s1,s2,p;
		int judge = 0;
		cin >> s1 >> p;
		s2 = s1 + s1;
		for(int i = 0;i < s1.size();i++){
				if( p == s2.substr(i, p.size())){
						judge = 1;
						break ;
				}
		}
		if(judge == 1) {
				cout << "Yes" << endl;
		}else{
				cout << "No" << endl;
		}
		return 0;
}