#include <iostream>
using namespace std;

int main(){
	int a[10000],b[10000];
	char c[10000];
	for(int i=0;c[i-1]!='?';i++) cin>>a[i]>>c[i]>>b[i];
	for(int j=0;c[j-1]!='?';j++){
		if(c[j]=='+') cout<<a[j]+b[j]<<endl;
		else if(c[j]=='-') cout<<a[j]-b[j]<<endl;
		else if(c[j]=='*') cout<<a[j]*b[j]<<endl;
		else if(c[j]=='/') cout<<a[j]/b[j]<<endl;
	}
	return 0;
}