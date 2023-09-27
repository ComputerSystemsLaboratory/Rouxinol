#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
	int ans=0,a;
	string str;
	while(1){
		cin>>str;
		if(str[0]=='0'){
			break;
		}
		for(int i=0;i<str.size();i++){
			a=str[i]-'0';
			ans+=a;
		}
		cout<<ans<<endl;
		ans=0;
	}
	return 0;
}