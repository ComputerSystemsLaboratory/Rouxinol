#include<iostream>
#include<string>
using namespace std;
string btn[10]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
typedef pair<int,int> P;
int main(){
	string in;
	for(cin>>in;cin>>in;){
		string res;
		P b=P(0,0);
		for(int i=0;i<(int)in.size();i++){
			if(b.first==0&&in[i]>'0'){
				b.first=in[i]-'0';b.second=0;
			}else if(b.first==in[i]-'0'){
				b.second++;
			}else if(in[i]=='0'&&b.first>0){
				res+=btn[b.first][b.second%btn[b.first].size()];
				b=P(0,0);
			}
		}
		cout<<res<<endl;
	}
	return 0;
}