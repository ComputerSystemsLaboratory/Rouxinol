#include<iostream>
#include<string>
using namespace std;

string data[10]={
	"",
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
int main(){
	int t;
	cin>>t;
	while(t>0){
		t--;
		string str;
		cin>>str;
		string ans;
		int counts=0;
		for(int i=0;i<str.size();i++){
			if(str[i]=='0'){
				if(counts)ans+=data[str[i-1]-'0'][(counts-1)%data[str[i-1]-'0'].size()];
				counts=0;
			}
			else counts++;
		}
		cout<<ans<<endl;
	}
}