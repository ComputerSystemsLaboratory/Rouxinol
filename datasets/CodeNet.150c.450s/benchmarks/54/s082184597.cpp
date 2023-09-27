#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

int main(){
	vector<int> num;
	int cnt=0;
	string str0,str1,str2;
	cin>>str0;
	for(int i=0; i<str0.size(); i++){
		char ch=str0[i];
		num.push_back(ch-'0');
	}
	while(getline(cin,str1)){
		if(str1=="END_OF_TEXT") break;
		stringstream ss(str1);
		while(getline(ss,str2,' ')){
			int s=num[0]-(str2[0]-'0');
			if((s==0 || s==32) && num.size()==str2.size() ){
				int judge=0;
				for(int i=1; i<num.size(); i++){
					int t=num[i]-(str2[i]-'0');
					if(t!=0 && t!=32 ){
						judge=1;
						break;
					}
				}
				if(judge==0) cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}
