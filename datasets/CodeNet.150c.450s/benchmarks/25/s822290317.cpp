#include <stdio.h>
int main(){
	char A[1200] = {0};
	char B[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char C[] = {"abcdefghijklmnopqrstuvwxyz"};
	int D[26] = {0};
	char ch;	
	//gets(A);
	
	for(int i = 0; scanf("%c", &ch) != EOF; i++){
    	A[i] = ch;
	}
	
	
	for(int i = 0; i < 1200; i++){
		for(int j = 0; j < 26; j++){
			if(A[i] == B[j]){
				A[i] = C[j];
				break;
			}
		}
	}
	
	for(int i = 0; i < 1200; i++){
		for(int j = 0; j < 26; j++){
			if(A[i] == C[j]){
				D[j]++;
				break;
			}
		}
	}
	
	for(int i = 0; i < 26; i++){
		printf("%c : %d\n", C[i], D[i]);
	}
  	return 0;
}