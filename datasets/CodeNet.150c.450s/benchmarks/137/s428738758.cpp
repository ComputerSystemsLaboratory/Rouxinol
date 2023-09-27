/*
filename:4_C-Dictionary.c
created on 17.9.2015 by charis
last edited on 17.9.2015 by charis
*/

#include<cstdio>
#include<cstring>

int m;

int getkey(char str[]){
	int sum = 0, p = 1;
	for(int k=0; k < strlen(str); k++){
		if (str[k] == 'A') sum += p*1;
		else if (str[k] == 'C') sum += p*2;
		else if (str[k] == 'G') sum += p*3;
		else if (str[k] == 'T') sum += p*4;
		p *= 5;
		}
	return sum ;
}
int h1(int key){
	return key % m;
}
int h2(int key){
	return 1 + (key % (m-1));
}
int h(int key, int i){
	return (h1(key)+i*h2(key)) % m ;
}
void insert(int T[], int key){
	int i=0;
	while(1){
		int j = h(key, i) ;
		if (T[j] == 0) {
			T[j] = key ;
			break;
		}
		else i++ ;
	}
}
bool search(int T[], int key){
	int i = 0;
	while(1){
		int j = h(key, i) ;
		if (T[j] == key) return true;
		else if (T[j] == 0 || i >= m) return false;
		else i++;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	m = 1046527;
	int T[m];
	for(int k=0; k<m; k++){
		T[k] = 0;
	}
	
	for(int k=0; k<n; k++){
		char com[9], str[13] ;
		scanf("%s %s", com, str);
		int key = getkey(str);		
		if (com[0] == 'i') insert(T, key);
		else if (com[0] == 'f') {
			if (search(T, key)) printf("yes\n");
			else printf("no\n") ;
		}	
	}
	return 0;
}