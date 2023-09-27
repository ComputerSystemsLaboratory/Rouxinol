#include<cstdio>
#include<cctype>
#include<iostream>
using namespace std;

int main()
{
	char moji;
	for(;;){
		scanf("%c",&moji);
		if(isupper(moji))
			cout<<(char)towlower(moji);
		else if(islower(moji))
			cout<<(char)toupper(moji);
		else{
			if(moji=='\n'){
			cout<<endl;
			break;
			}
			cout<<moji;
		}
	}
	return 0;
}