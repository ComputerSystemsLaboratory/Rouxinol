#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char a[21];
	int i,nagasa;
	cin>>a;
	nagasa=strlen(a);
	for(i=nagasa-1;i>=0;i--)
		cout<<a[i];
	cout<<endl;
	return 0;
}