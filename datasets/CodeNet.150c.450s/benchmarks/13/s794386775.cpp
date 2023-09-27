#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main(){
	int cnt=0;
	char c;
	string p,s,sum;
	cin>>s>>p;
	sum=s+s;
	for(int i=0;i<s.size();i++){
		string ans;
		for(int j=0;j<p.size();j++){
			c=sum[i+j];
			ans+=c;
		}
		if(ans==p){
			cnt++;
			break;
		}
	}
	if(cnt>0){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}