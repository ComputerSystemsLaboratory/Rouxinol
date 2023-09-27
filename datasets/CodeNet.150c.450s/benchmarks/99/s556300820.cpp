#include <string>
#include <iostream>

using namespace std;

int main(){
	int n; cin >> n;
	for(int i=0;i<n;i++){
		string s, t; cin >> s >> t;
		int a[4] = {}, b[4] = {};
		int num = 1;
		for(int j=0;j<s.length();j++){
			if(s[j]=='m') a[0] = num, num = 1;
			else if(s[j]=='c') a[1] = num, num = 1;
			else if(s[j]=='x') a[2] = num, num = 1;
			else if(s[j]=='i') a[3] = num, num = 1;
			else num = s[j]-'0';
		}
		num = 1;
		for(int j=0;j<t.length();j++){
			if(t[j]=='m') b[0] = num, num = 1;
			else if(t[j]=='c') b[1] = num, num = 1;
			else if(t[j]=='x') b[2] = num, num = 1;
			else if(t[j]=='i') b[3] = num, num = 1;
			else num = t[j]-'0';
		}
		int carry = 0;
		int sum[4] = {};
		for(int i=3;i>=0;i--){
			sum[i] = a[i] + b[i] + carry;
			carry = sum[i] / 10;
			sum[i] %= 10;
		}
		char c[4] = { 'm', 'c', 'x', 'i' };
		for(int i=0;i<4;i++){
			if(sum[i]>1) cout << sum[i];
			if(sum[i]>0) cout << c[i];
		}
		cout << endl;
	}
}