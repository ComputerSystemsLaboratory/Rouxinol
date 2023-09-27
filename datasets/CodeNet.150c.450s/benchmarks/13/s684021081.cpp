//ITP1_8 Ring

#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){
	string s, ss, p;
	cin >> s;
	cin >> p;
	ss = s + s;  //文字列の連結
//	cout << s.length();
	int flag;
	for(int i = 0; i < s.length(); i++){  //文字列sのどの位置から
		flag = 1;
//		cout << "i:" << i << endl;
		for(int j = 0; j < p.length(); j++){
//			cout << "j:" << j << endl;
//			cout << "ss:" << ss[i+j] << endl;
//			cout << "p:" << p[j] << endl;
			if(ss[i + j] != p[j]){
//				cout << "!!!" << endl;
				flag = 0;
				break;
			}
		}
		if(flag == 1) break;
	}
	if(flag == 1) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}