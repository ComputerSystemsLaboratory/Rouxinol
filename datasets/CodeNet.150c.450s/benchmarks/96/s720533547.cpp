#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<string> key={".,!? ","abc","def","ghi","jkl","mno",
					"pqrs","tuv","wxyz"};
int main(){
	int n;	cin>>n;
	while(n--){
		string s;	cin>>s;
		s+='0';
		string ret="";
		for(int i=1;i<s.size();i++){
			while(i<s.size()&&s[i]==s[i-1]&&s[i]=='0'){
				s.erase(s.begin()+i);
			}
		}
		while(s[0]=='0')	s.erase(s.begin());
		int type=s[0]-'0'-1;
		int push=0;
		for(int i=1;i<s.size();i++){
			if(type==s[i]-'0'-1)	push=(push+1)%key[type].size();
			else if(s[i]=='0'){
				ret+=key[type][push];
				if(i+1<s.size()){
					type=s[i+1]-'0'-1;
					push=-1;
				}
				else 	type=-1;
			}
			else{
				ret+=key[type][push];
				type=s[i]-'0'-1;
				push=0;
			}
		}
		if(type!=-1){
			ret+=key[type][push];
		}
		cout<<ret<<endl;
	}
	return 0;
}