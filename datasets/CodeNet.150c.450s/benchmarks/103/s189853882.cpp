#include <stdio.h>
#include <algorithm>
using namespace std;

int ans[101][10];

int pow(int a,int n){
	if(n <= 0){
		return 1;
	}
	return a * pow(a,n - 1);
}

int main(){
	int m,n;
	int num;
	int sum;
	for(int i = 0; i < 101; i++){
		for(int j = 0; j < 10; j++){
			ans[i][j] = 0;
		}
	}
	for(int i = 0; i < 1023; i++){
		num = 0;
		sum = 0;
		for(int j = 0; j < 10; j++){
			if((i / pow(2,j)) % 2 == 1){
				num++;
				sum += j;
			}
		}
		ans[sum][num]++;
	}
	
	scanf("%d %d",&m,&n);
	while(m != 0 || n != 0){
		printf("%d\n",ans[n][m]);
		scanf("%d %d",&m,&n);
	}
		return 0;

}