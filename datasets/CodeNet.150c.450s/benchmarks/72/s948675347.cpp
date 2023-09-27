#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	char x,a;
	while(1){
		scanf("%c",&x);
		if(islower(x)){
			a = toupper(x);
			cout << a;
		}else if(isupper(x)){
			a = tolower(x);
			cout << a;
		}else{
			cout << x;
	}
		if(x == '\n'){
			break;
		}
	}
	return 0;
}