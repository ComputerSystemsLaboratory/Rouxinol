#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int in;
	char input;
	int data[4][13];//1:s,2:h,3:c,4:d
	memset(data,0,sizeof(data));
	for(int i=0;i<n;i++){
		scanf(" %c %d",&input,&in);
		switch(input){
			case 'S':
				data[0][in-1]=1;
				break;
			case 'H':
				data[1][in-1]=1;
				break;
			case 'C':
				data[2][in-1]=1;
				break;
			case 'D':
				data[3][in-1]=1;
				break;
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<13;j++){
			if(data[i][j]==0){
				switch(i){
					case 0:
						printf("S ");
						break;
					case 1:
						printf("H ");
						break;
					case 2:
						printf("C ");
						break;
					case 3:
						printf("D ");
				}
				printf("%d\n",j+1);
			}
		}
	}
	return 0;
}