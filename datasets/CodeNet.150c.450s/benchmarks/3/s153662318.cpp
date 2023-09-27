#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<map>
#include<list>
#include<cctype>
#include<utility>
#include<algorithm>
#include<cctype>
using namespace std;

void print(string s,int a,int b){
	cout << s.substr(a,b-a+1) << endl;
}
void reverse(string& s,int a,int b){
	string tmp = s;
	for(int i=a;i<b+1;i++){
		s[i] = tmp[b-(i-a)];
	}
}
void replace(string& s,int a,int b,string x){
	for(int i=a;i<b+1;i++){
		s[i] = x[i-a];
	}
}

int main()
{
	string str,s,x;
	cin >> str;
	int n,a,b;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> s >> a >> b;
		if(s=="print"){
			print(str,a,b);
		}else if(s=="replace"){
			cin >> x;
			replace(str,a,b,x);
		}else if(s=="reverse"){
			reverse(str,a,b);
		}
	}

    return 0;
}