#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;

int main(void){
	char c;
	while(1){
		c = getchar();
		if(islower(c))
			c = toupper(c);
		else if(isupper(c))
			c = tolower(c);
		cout<<c;
		if(c=='\n')
			break;
	}

  return 0;
}