#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int main(){
	while(1){
		char c;
		scanf("%c",&c);
		int a = atoi(&c);
		if(a==0) return 0;
		while(1){
			scanf("%c",&c);
			if(c=='\n'){ cout << a << endl; break;}
			a += atoi(&c);
		}
	}
}