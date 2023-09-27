#include <cstdio>


int main(){
	unsigned n,b,f,r;
	int v,res[4][3][10];

	for(auto &v : res){
		for(auto &v1 : v){
			for(auto &v2 : v1){
				v2 = 0;
			}
		}
	}

	scanf("%u",&n);
	for(int i=0;i<n;i++){
		scanf("%u %u %u %d",&b,&f,&r,&v);
		res[b-1][f-1][r-1]+=v;
	}

	for(int i=0;i<4;i++){

		if(i)
			printf("####################\n");

		for(int j=0;j<3;j++){
			for(int k=0;k<10;k++){
				printf(" %d",res[i][j][k]);
			}
			putchar('\n');
		}
	}
}