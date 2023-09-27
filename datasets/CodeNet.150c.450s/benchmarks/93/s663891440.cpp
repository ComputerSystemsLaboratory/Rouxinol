#include <stdio.h>

#define MAX 100000

struct TRAMP{
	char mark;
	int number;
};

TRAMP cards[MAX];

struct ORDER{
	ORDER(){
		number = 0;
		mark_array_index = 0;
	}
	int number;
	int mark_array_index;
	char mark_array[5];
};

ORDER inputedORDER[MAX];
int order_index = 0;

int n;

void registerORDER(char mark,int number){
	int i;
	for(i = 0; i < order_index; i++){
		if(number == inputedORDER[i].number) break;
	}
	if(i == order_index){
		inputedORDER[order_index].number = number;
		inputedORDER[order_index].mark_array[inputedORDER[order_index].mark_array_index++] = mark;
		order_index++;
	}else{
		inputedORDER[i].mark_array[inputedORDER[i].mark_array_index++] = mark;
	}
}

bool compareToORDER(int cards_index){
	int i,k = 0,number = cards[cards_index].number;
	for(i = 0; i < order_index;i++){
		if(number == inputedORDER[i].number) break;
	}
	while(number == cards[cards_index].number && k < inputedORDER[i].mark_array_index){
		if(cards[cards_index].mark != inputedORDER[i].mark_array[k])
			return false;
		else{
			cards_index++;
			k++;
		}
	}
	return true;
}

bool isStable(){
	int history = 0;
	for(int i = 1; i < n; i++){
		if(cards[history].number != cards[i].number || i == n-1){
			if(!compareToORDER(history))
				return false;
			else{
				history = i;
			}
		}
	}
	return true;
}

int Partition(int left,int right){
	int i = left-1,pivot = cards[right].number;
	TRAMP tmp;
	for(int start = left; start < right; start++){
		if(cards[start].number <= pivot){
				i++;
				tmp = cards[i];
				cards[i] = cards[start];
				cards[start] = tmp;
		}
	}

	tmp = cards[right];
	cards[right] = cards[i+1];
	cards[i+1] = tmp;

	return i+1;
}

void quickSort(int left,int right){
	if(left < right){
		int q = Partition(left,right);
		quickSort(left,q-1);
		quickSort(q+1,right);
	}
}


int main(){
	scanf("%d",&n);

	for(int i = 0; i < n; i++){
		scanf("%s %d",&cards[i].mark,&cards[i].number);
		registerORDER(cards[i].mark,cards[i].number);
	}

	quickSort(0,n-1);

	if(isStable()){
		printf("Stable\n");
	}else{
		printf("Not stable\n");
	}

	for(int i = 0; i < n; i++)	printf("%c %d\n",cards[i].mark,cards[i].number);
}