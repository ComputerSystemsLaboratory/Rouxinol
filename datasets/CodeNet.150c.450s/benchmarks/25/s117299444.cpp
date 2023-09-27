#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;
int main(){
	string r;int c;char ny;
while(scanf("%c",&ny)!=EOF){
	
	//if(ny==EOF)break;
	r+=ny;
	}
	char a='a';
	int count[26]={0};//aが0,zが25
	
	for(int i=0;i<r.size();i++){
		for(int j=0;j<26;j++){
		r[i]=tolower(r[i]);
		if(r[i]-'a'==j)count[j]++;
		}
	}
	for(int i=0;i<26;i++){
	printf("%c : %d\n",a,count[i]);
	a++;
	}
return 0;
}