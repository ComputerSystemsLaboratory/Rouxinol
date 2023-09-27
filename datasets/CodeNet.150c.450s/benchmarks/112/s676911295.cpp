#include<string>
#include<cstdio>
#include<map>

int main(){
	using namespace std;
	int a,b;
	char c,d,s[9];
	map<char,char> code;
	while(scanf("%d",&a),a){
		while(a--){
			scanf(" %c %c",&c,&d);
			code[c]=d;
		}		
		scanf("%d",&a);
		while(a--){
			scanf(" %c",&c);
			if(code.count(c)==1){
				putchar(code[c]);
			}
			else{
				putchar(c);
			}
		}
		printf("\n");
		code.clear();
	}
	return 0;
}