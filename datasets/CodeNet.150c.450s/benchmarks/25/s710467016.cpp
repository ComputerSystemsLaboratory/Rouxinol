#include <cstdio>
#include <cctype>
using namespace std;

int main(){
	char A;
	int C[26]={0},i;
	while( scanf("%c", &A)!= EOF){
		
		if(isalpha(A)){
			A=tolower(A);
		    int i=A-'a';
		    C[i]++;
		}
	}
	
	for(int i=0; i<26; i++){
		printf("%c : %d\n",i+'a',C[i]);
	}

	return 0;
}