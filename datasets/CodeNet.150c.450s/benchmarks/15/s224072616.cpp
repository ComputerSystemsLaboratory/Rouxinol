#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
static const int NMAX=10000;
static const int QMAX=500;
int search(int A[],int n,int key){
	int i = 0;
	A[n] = key;
	while( A[i] != key ) i++;
	return i != n;
}

int main(){
	int n,q;
	int key;
	int S[NMAX+1];
	int c=0;

	std::cin >> n;
	for(int i=0;i < n;i++){
		std::cin >> S[i];
	}
	std::cin >> q;

	for(int i=0;i < q;i++){
		scanf("%d",&key);
		if(search(S,n,key))c++;
	}

	std::cout << c << std::endl;
	return 0;
}