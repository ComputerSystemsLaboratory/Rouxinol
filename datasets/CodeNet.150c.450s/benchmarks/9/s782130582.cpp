#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
#define ref goto refrain
int main(){
	char str[256];
	refrain:
	cin>>str;
	if(str[0]=='-') return 0;
	int a=strlen(str);
	int m;
	cin>>m;
	int b,c;
	for(int i=0;i<m;i++){
		cin>>b;
		char temp[b];
		for(int j=0;j<b;j++){
			temp[j]=str[j];
		}
		c=0;
		for(int j=b;j<a;j++){
			str[c]=str[j];
			c++;
		}
		c=0;
		for(int j=a-b;j<a;j++){
			str[j]=temp[c];
			c++;
		}
	}
	cout<<str<<endl;
	ref;
}
		
	