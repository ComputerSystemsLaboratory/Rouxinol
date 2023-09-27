#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <stack>

using namespace std;

int translate(char ch){
	switch(ch){
	case 'm':return 1000;
	case 'c':return 100;
	case 'x':return 10;
	case 'i':return 1;
	}
	return -1;	//must not reach here
}

int main(){

	int n,work_l,work_r,pre,result;
	char left[9],right[9];

	scanf("%d",&n);

	for(int i = 0; i < n; i++){
		scanf("%s %s",left,right);

		pre = -1;
		work_l = work_r = 0;

		for(int k = 0; left[k] != '\0'; k++){
			if(left[k] >= '2' && left[k] <= '9'){
				pre = left[k] - '0';
			}else{
				if(pre != -1){
					work_l += pre*translate(left[k]);
					pre = -1;
				}else{
					work_l += translate(left[k]);
				}
			}
		}

		pre = -1;

		for(int k = 0; right[k] != '\0'; k++){
			if(right[k] >= '2' && right[k] <= '9'){
				pre = right[k] - '0';
			}else{
				if(pre != -1){
					work_r += pre*translate(right[k]);
					pre = -1;
				}else{
					work_r += translate(right[k]);
				}
			}
		}

		result = work_l + work_r;

		if(result/1000 == 0){
			//Do nothing
		}else if(result/1000 == 1){
			printf("m");
		}else{
			printf("%dm",result/1000);
		}
		result %= 1000;

		if(result/100 == 0){
			//Do nothing
		}else if(result/100 == 1){
			printf("c");
		}else{
			printf("%dc",result/100);
		}
		result %= 100;

		if(result/10 == 0){
			//Do nothing
		}else if(result/10 == 1){
			printf("x");
		}else{
			printf("%dx",result/10);
		}
		result %= 10;

		if(result == 1){
			printf("i");
		}else if(result > 1){
			printf("%di",result);
		}
		printf("\n");
	}


	return 0;
}