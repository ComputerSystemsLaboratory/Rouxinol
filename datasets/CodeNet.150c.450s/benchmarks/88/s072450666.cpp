#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
	while(1){
		int h, w;
		cin >> h >> w;
		if(h == 0 && w == 0) break;
		int ansh = 10000000;
		int answ = 10000000;
		int dig = h*h + w*w;

		for(int i=1; i<=150; i++){
			for(int j=i+1; j<=150; j++){
				int tmp = i*i + j*j;
				if(dig < tmp){
					int ansdig = answ*answ + ansh*ansh;
					if(ansdig > tmp){
						//printf("ans%d %d a\n", i, j);
						ansh = i;
						answ = j;
					}else if(ansdig == tmp && ansh > i){
						//printf("ans%d %da b\n", i, j);
						ansh = i;
						answ = j;
					}
				}else if(dig == tmp && h < i){
					int ansdig = answ*answ + ansh*ansh;
					if(ansdig > tmp){
						//printf("ans%d %d\n c", i, j);
						ansh = i;
						answ = j;
					}else if(ansdig == tmp && ansh > i){
						//printf("ans%d %d\n d", i, j);
						ansh = i;
						answ = j;
					}

				}

			}
		}
		printf("%d %d\n", ansh, answ);
	}


	return 0;
}