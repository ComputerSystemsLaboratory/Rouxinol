#include <stdio.h>
#include <algorithm>

using namespace std;

struct TRAMP{
	char mark;
	int number;
};

int main(){
	int n,min;
	char buf[3];
	scanf("%d",&n);

	TRAMP selectArray[n],bubbleArray[n];

	for(int i = 0; i < n; i++){
		scanf("%s",buf);
		selectArray[i].mark = buf[0];
		selectArray[i].number = buf[1] - '0';
		bubbleArray[i] = selectArray[i];
	}

	for(int i = n-1; i >= 0; i--){
		for(int j = 0; j < i; j++){
			if(bubbleArray[j].number > bubbleArray[j+1].number) swap(bubbleArray[j], bubbleArray[j+1]);
		}
	}

	for(int i = 0; i < n-1; i++){
		min = i;
		for(int j = i+1; j < n; j++){
			if(selectArray[j].number < selectArray[min].number){
				min = j;
			}
		}
		if(i != min){
			swap(selectArray[i],selectArray[min]);
		}
	}

	for(int i = 0; i < n-1; i++) printf("%c%d ",bubbleArray[i].mark,bubbleArray[i].number);
	printf("%c%d\n",bubbleArray[n-1].mark,bubbleArray[n-1].number);
	printf("Stable\n");
	for(int i = 0; i < n-1; i++) printf("%c%d ",selectArray[i].mark,selectArray[i].number);
	printf("%c%d\n",selectArray[n-1].mark,selectArray[n-1].number);

	int p;
	for(p=0; p < n; p++){
		if(selectArray[p].number != bubbleArray[p].number || selectArray[p].mark != bubbleArray[p].mark)
			break;
	}
	if(p == n){
		printf("Stable\n");
	}else{
		printf("Not stable\n");
	}

	return 0;
}

