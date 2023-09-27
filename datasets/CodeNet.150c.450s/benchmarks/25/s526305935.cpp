#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	char c[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	vector<int> ans(26,0);
	string str;
	char ch;
	while(cin>>ch){
	//getline(cin,str);
	//for(int i=0; i<(int)str.size(); i++){
		//cout<<(str[i]-'0')<<endl;//-49
		//int n=str[i]-'0';
		int n=ch-'0';
		if(49<=n && n<= 74){
			ans[n-49]+=1;
		}else if(17<=n && n<=42){
			ans[n-17]+=1;
		}
	}
	for(int i=0; i<ans.size(); i++){
		cout<<c[i]<<" : "<<ans[i]<<endl;
	}
	return 0;
}
