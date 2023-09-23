#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;

int main(){
	
	char a;
	
	while(1){
		scanf("%c",&a);
		if (a=='\n') break;
		if (a==' ') cout << " ";
		else if (islower(a))  printf("%c",toupper(a));
		else printf("%c",tolower(a));
	}
	cout << endl;
	return 0;
}