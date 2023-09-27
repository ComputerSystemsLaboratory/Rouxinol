#include<iostream>
#include<cstdio>
#include<map>
#include<string>
using namespace std;
map<string,bool>S;
char com[7];
char  str[13];
int n;

int main(){
	scanf("%d",&n);
	for(int j=0;j<n;j++){
	scanf("%s %s",com,str);
	if(com[0]=='i'){
		S[string(str)]=true;
		}
		else if(S[string(str)]==true){
			cout<<"yes"<<endl;
		}
	    else if(S[string(str)]!=true){
	         cout<<"no"<<endl;
			}
	}
	return 0;
	}