#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	int n,j;
	string s,moto;
	set<string> se;
	cin >> n;
	for(int i = 0;i < n;i++){
		se.clear();
		cin >> moto;
		for(j = 1; j < moto.size();j++){
			string s1; //????????????
			for(int k = 0;k < j;k++){
				s1 += moto[k];
			}
			string s2;  //?????´????????????
			for(int k = moto.size()-1;k >= j;k--){
				s2 += moto[k];
			}
			string s3;  //?????´????????????
			for(int k = j-1;k >= 0;k--){
				s3 += moto[k];
			}
			string s4;  //????????????
			for(int k = j;k < moto.size();k++){
				s4 += moto[k];
			}
		se.insert(s1 + s2);//????????????
		se.insert(s2 + s1);//????????????
		se.insert(s3 + s4);//????????????
		se.insert(s4 + s3);//????????????
		se.insert(s1 + s4);//????????????
		se.insert(s4 + s1);//????????????
		se.insert(s3 + s2);//????????????
		se.insert(s2 + s3);//????????????
		}
	cout << se.size() <<endl;
	}
	return 0;
}