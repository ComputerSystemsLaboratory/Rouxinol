#include <bits/stdc++.h>
using namespace std;
string s,data[9]={
    ".,!? ",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"
};
int n,i,p,t;
int main(){
	cin>>n;while(n--){
		cin>>s,t=1,p=s[0]-'0';
		for(i=1;i<s.length();i++){
			if(s[i]=='0'){
				if(p!=0)cout<<data[p-1][(t-1)%data[p-1].length()];
				i++,p=s[i]-'0',t=1;
			}else if(p==0)p=s[i]-'0';
			else t++;
		}
		cout<<endl;
	}
}