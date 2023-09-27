#include<iostream>
#include<algorithm>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[1080], b[1080];
int n, m;

string button[10] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
string str;

char _str[10800];
void output(int val, int cnt){
	if(val == 0)return;
	cout << button[val][(cnt-1) % button[val].size()];
}


int main(){
	int q;
	cin >> q;
	while(q--){
		cin >> str;
		int val = 0;
		int cnt = 0;
		for(int i = 0;i < str.size();i++){
			if(str[i] == '0'){
				output(val, cnt);
				val = cnt = 0;
			}
			else{
				val = str[i] - '0';
				cnt++;
			}
		}
		output(val, cnt);
		cout << endl;
	}
	return 0;
}