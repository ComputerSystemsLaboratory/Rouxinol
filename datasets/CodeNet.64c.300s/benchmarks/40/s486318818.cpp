#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main(){
	string a;
	char check;
	getline(cin,a);
	for(int i=0;i<a.size();i++){
		if(isalpha(a[i])!=0){
			check=a[i];
			a[i]=tolower(a[i]);
			if(check==a[i])
				a[i]=toupper(a[i]);
		}
		cout<<a[i];
	}
	cout<<endl;
	return 0;
}