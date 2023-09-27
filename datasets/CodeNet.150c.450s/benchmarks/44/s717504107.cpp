#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n;
	int hit[4],blow[4];
	int h=0,b=0;
	int hcount = 0,bcount = 0;

	while(cin >> n){
		if(h < 4){
			hit[h] = n;
			h++;
		}else if(b < 4){
			blow[b] = n;
			b++;
		}
		if(b == 4){
			for(int i=0;i<4;i++){
				if(hit[i] == blow[i]){
					hcount++;
				}
			}

			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					if((hit[i] == blow[j]) && (hit[j] != blow[j])){
						bcount++;
					}
				}
			}

			printf("%d %d\n",hcount,bcount);
			h = b = hcount = bcount = 0;
			
		}
	}
}