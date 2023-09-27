#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;
int n;
string rev(string str){
	string ans = "";
	for(int i = str.size() - 1;i >= 0;i--)ans += str[i];
	return ans;
}

string str;
void solve(){
	cin >> str;
	set<string> ans;
	for(int i = 1;i < str.size();i++){
		string tmp1, tmp2;
		for(int j = 0;j < str.size();j++){
			if(j < i)tmp1 += str[j];
			else tmp2 += str[j];
		}
		ans.insert(tmp1+tmp2);
		ans.insert(tmp2+tmp1);
		tmp1 = rev(tmp1);

		ans.insert(tmp1+tmp2);
		ans.insert(tmp2+tmp1);
		tmp2 = rev(tmp2);
		
		ans.insert(tmp1+tmp2);
		ans.insert(tmp2+tmp1);
		tmp1 = rev(tmp1);

		ans.insert(tmp1+tmp2);
		ans.insert(tmp2+tmp1);
		
	}
	cout << ans.size() << endl;
}

int main(){
	cin >> n;
	while(n--)solve();
	return 0;
}
