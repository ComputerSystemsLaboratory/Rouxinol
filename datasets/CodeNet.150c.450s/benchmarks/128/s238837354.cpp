#include<iostream>
using namespace std;
int main(){
	string str;
	char a[20];
	cin>>str;
	for(int i=0;i<str.size();i++){
		a[str.size()-i-1]=str[i];
	}
	for(int i=0;i<=str.size();i++){
		str[i]=a[i];
	}
	cout<<str<<endl;
	return 0;
}		
