#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;
int transform(string str){
	int num=0;
	for(int j=0;j<str.length();j++){
		if(isdigit((int)str[j])){
			if(str[j+1]=='m') num += (str[j]-48)*1000;
			else if(str[j+1]=='c') num += (str[j]-48)*100;
			else if(str[j+1]=='x') num += (str[j]-48)*10;
			else if(str[j+1]=='i') num += (str[j]-48);
			j++;
		}else{
			if(str[j]=='m') num+=1000;
			else if(str[j]=='c') num+=100;
			else if(str[j]=='x') num+=10;
			else if(str[j]=='i') num++;
		}
	}
	return num;
}

int retrans(int num){
	vector<char> ans;
	int kurai[4];
	for(int k=0;k<4;k++){
		kurai[k]=num%10;
		num/=10;
	}
	for(int k=0;k<4;k++){
		if(kurai[3-k]==0) continue;
		else if(kurai[3-k]==1){
			if(k==0) ans.push_back('m');
			else if(k==1) ans.push_back('c');
			else if(k==2) ans.push_back('x');
			else if(k==3) ans.push_back('i');
		}else{
			ans.push_back(kurai[3-k]+48);
			if(k==0) ans.push_back('m');
			else if(k==1) ans.push_back('c');
			else if(k==2) ans.push_back('x');
			else if(k==3) ans.push_back('i');
		}
	}
	for(int k=0;k<ans.size();k++){
		cout<<ans[k];
	}
	cout<<endl;
	return 0;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string mcxi1,mcxi2;
		cin>>mcxi1>>mcxi2;
		int a=transform(mcxi1);
		int b=transform(mcxi2);
		retrans(a+b);
	}
	return 0;
}