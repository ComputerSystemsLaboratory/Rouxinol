#include<iostream>
#include<string>
using namespace std;

int main(){
	string ss;
	cin>>ss;
	for(int i=ss.size();i>=0;i--){
		if(ss[i]!=0)cout<<ss[i];
	}
	cout<<endl;
	return 0;
}