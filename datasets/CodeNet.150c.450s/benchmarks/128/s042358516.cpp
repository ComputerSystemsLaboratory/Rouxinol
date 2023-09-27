#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char bun[25] = {};
	int len;
	cin >> bun;
	len=strlen(bun);
	for(int i=len-1;i>=0;i--){
		cout<<bun[i];
	}
	cout<<endl;
	return 0;
}

