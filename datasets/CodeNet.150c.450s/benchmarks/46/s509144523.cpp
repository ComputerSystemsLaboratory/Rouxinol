#include<bits/stdc++.h>
int main(){
	int sampai, hasil, counter;
	for(int i=0; ; i++){
		scanf("%d %d", &sampai, &hasil);
		counter = 0;
		if(hasil==0 && sampai==0) break;
		for(int j=1; j<=sampai; j++){
			for(int k=j+1; k<=sampai; k++){
				for(int l=k+1; l<=sampai; l++){
					if(hasil==(j+k+l)) counter++;
				}
			}
		}
		printf("%d\n", counter);
	}
}
