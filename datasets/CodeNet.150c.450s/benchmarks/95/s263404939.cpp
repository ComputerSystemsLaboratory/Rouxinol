#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
	int mo[102]={0};
		bool l=0,r=0;
		int cnt=0;
		string mae="tmp";
		for(int i=0;i<n;i++){
			string tmp;
			cin>>tmp;
			if(tmp=="lu")l=1;
			else if(tmp=="ru")r=1;
			else if(tmp=="ld")l=0;
			else if(tmp=="rd")r=0;
			if(r==l&&mae[0]!=tmp[0])cnt++;
			mae=tmp;
		}
		cout<<cnt<<endl;
		}
	return 0;
}