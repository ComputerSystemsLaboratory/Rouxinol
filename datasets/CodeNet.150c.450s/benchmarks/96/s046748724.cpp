#include<iostream>
#include<string>
using namespace std;
#define rep(i,j) for(int i = 0; i < (j); i++)
int main(){
	int n;
	cin >> n;
	string change[] = {"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};	
	while(n--){
		string str;
		cin >> str;
		int len = str.size();
		string ans = "";
		rep(i,len){
			if(str[i] == '0')continue;
			int sub = i;
			while(str[i] == str[++sub]);
			ans += change[str[sub-1]-48][(sub-i-1)%change[str[sub-1]-48].size()];
			i = sub;
		}
		cout << ans << endl;
	}	
	return 0;
}