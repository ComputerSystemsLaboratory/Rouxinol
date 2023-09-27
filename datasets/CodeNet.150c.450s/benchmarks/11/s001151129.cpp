#include<bits/stdc++.h>

void print(int C[], char jenisKartu){
	for(int i=1; i<=13; i++){
		if(C[i]==0) printf("%c %d\n", jenisKartu, i);
	}
}

int main(){
	int kartu, temp;
	char jenisKartu;
	int S[14], H[14], C[14], D[14];
	memset(S, 0, sizeof(S));
	memset(H, 0, sizeof(H));
	memset(C, 0, sizeof(C));
	memset(D, 0, sizeof(D));
	scanf("%d", &kartu);
	for(int i=0; i<kartu; i++){
		scanf(" %c", &jenisKartu);
		scanf("%d", &temp);
		if(jenisKartu=='S'){
			S[temp]=1;
		}
		else if(jenisKartu=='H'){
			H[temp]=1;
		}
		else if(jenisKartu=='C'){
			C[temp]=1;
		}
		else if(jenisKartu=='D'){
			D[temp]=1;
		}
	}
	print(S,'S');
	print(H,'H');
	print(C,'C');
	print(D,'D');
}
