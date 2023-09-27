#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
#define ref goto refrain
int main(){
	string a,b;
	int i=0;
	cin>>a;
	for(int j=0;a[j]!='\0';j++){
		if(a[j]>='A'&&a[j]<='Z'){
			a[j]=a[j]-'A'+'a';
		}
	}
	while(1){
		cin>>b;
		if(b=="END_OF_TEXT") break;
		for(int j=0;b[j]!='\0';j++){
			if(b[j]>='A'&&b[j]<='Z'){
				b[j]=b[j]-'A'+'a';
			}
		}
		if(a==b) i++;
	}
	cout<<i<<endl;
	return 0;
}