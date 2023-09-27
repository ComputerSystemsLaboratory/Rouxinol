#include <iostream>
#include <string>
using namespace std;

int main(){
	string chg[] = {".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		string s;
		cin >> s;
		int now = -1,num = -1;
		for(int j = 0;j < s.length();j++){
			if(s[j] == '0'){
				if(now == -1 && num == -1) continue;
				cout << chg[now][num % chg[now].length()];
				num = -1;
				now = -1;
			}else{
				now = s[j] - '1';
				num++;
			}
		}
		cout << endl;
	}
	return 0;
}