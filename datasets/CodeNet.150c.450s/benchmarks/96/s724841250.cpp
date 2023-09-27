#include <iostream>
#include <vector>
using namespace std;

int main(){
	string key[10];
	key[0]="";
	key[1]=".,!? ";
	key[2]="abc";
	key[3]="def";
	key[4]="ghi";
	key[5]="jkl";
	key[6]="mno";
	key[7]="pqrs";
	key[8]="tuv";
	key[9]="wxyz";

	int m;
	cin >> m;
	for(int i=0;i<m;i++){
		string str;
		cin >> str;
		vector<char> res;
		int b=-1,n=-1;
		for(int i=0,a;i<str.length();i++,n++,b=a){
			a=(char)str[i]-'0';
			if(b!=-1&&b!=a){
				if(b!=0)
					res.push_back(key[b][n%key[b].length()]);
				n=-1;
			}
		}
		if(b!=0)
			res.push_back(key[b][n%key[b].length()]);


		string s(res.begin(),res.end());
		cout << s << endl;
	}

	return 0;
}