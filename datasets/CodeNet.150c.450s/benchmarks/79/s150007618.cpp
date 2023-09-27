#include<iostream>

void showDeck(int *a,int l){
	std::cout << "[";
	for(int i=0;i<l;i++){
		std::cout << a[i] ;
		if(i!=l-1) std::cout << ", ";
	}
	std::cout << "]" << std::endl;
}
int main(void) {
	int n,r;
	int p,c;
	int a[2];
	while(true){
		std::cin >> n;
		std::cin >> r;
		if(n == 0 || r == 0) break;
		int deck[n];
		for(int i=0;i<n;i++){
			deck[i] = n-i;
		}
		for(int ii=0;ii<r;ii++){
			std::cin >> p;
			std::cin >> c;
			int set1[p-1];
			int set2[c];
			for(int i=0; i<p-1;i++){
				set1[i]=deck[i];
			}
			for(int i=0; i<c;i++){
				set2[i]=deck[p-1+i];
			}
			// showDeck(deck,n);
			// showDeck(set1,p-1);
			// showDeck(set2,c);
			for(int i=0;i<c;i++){
				deck[i]=set2[i];
			}
			for(int i=0;i<p-1;i++){
				deck[c+i]=set1[i];
			}
			// showDeck(deck,n);
		}
		std::cout << deck[0] << std::endl;
	}
	return 0;
}