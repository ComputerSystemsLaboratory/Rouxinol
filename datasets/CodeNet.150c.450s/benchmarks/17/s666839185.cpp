#include<cstdio>
#include<algorithm>
using namespace std;

int input_data[5];

int main(void){
	for(int i = 0; i < 5; i++){
		scanf("%d", &input_data[i]);
	}
	for(int i = 0; i < 5; i++){
		for(int j = i + 1; j < 5; j++){
			if(input_data[i] < input_data[j]){
				swap(input_data[i], input_data[j]);
			}
		}
	}
	for(int i = 0; i < 5; i++){
		printf("%d", input_data[i]);
		if(i != 4) printf(" ");
	}
	printf("\n");
	return 0;
}