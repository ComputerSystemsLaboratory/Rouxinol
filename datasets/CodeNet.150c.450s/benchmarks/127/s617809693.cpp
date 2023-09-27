#include <iostream>
#include <cstring>
#include <map>
#define pb push_back
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		map<string,int> m;
		string str, rstr;
		cin >> str;
		m[str] = 1;
		for(int j = 0; j < str.size(); j++) rstr.pb(str[str.size()-1-j]);
		m[rstr] = 1;
		for(int j = 1; j < str.size(); j++){
			string s1, s2, rs1, rs2;
			for(int k = 0; k < j; k++){
				s1.pb(str[k]);
				rs1.pb(str[j-1-k]);
			}
			for(int k = j; k < str.size(); k++){
				s2.pb(str[k]);
				rs2.pb(str[str.size()-1+j-k]);
			}
			//cout << s1 << " " << s2 << " " << rs1 << " " << rs2 << endl;
			m[s1+s2] = 1;
			m[rs1+s2] = 1;
			m[s1+rs2] = 1;
			m[rs1+rs2] = 1;
			m[s2+s1] = 1;
			m[rs2+s1] = 1;
			m[s2+rs1] = 1;
			m[rs2+rs1] = 1;
		}
		cout << m.size() << endl;
	}
}