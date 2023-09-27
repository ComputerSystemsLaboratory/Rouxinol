#include<cstdio>
#include<algorithm>
using namespace std;

struct Card{
	char suit;
	int value;
};

Card Input, B[36], S[36];
int N;

void BubbleSort(Card C[]){
	for(int i = 0; i < N; i++){
		for(int j = N - 1; j > i; j--){
			if(C[j].value < C[j-1].value){
				swap(C[j], C[j-1]);
			}
		}
	}
}

void SelectionSort(Card C[]){
	for(int i = 0; i < N; i++){
		int mini = i;
		for(int j = i; j < N; j++){
			if(C[j].value < C[mini].value){
				mini = j;
			}
		}
		swap(C[i], C[mini]);
	}
}

bool CompareCards(Card A[], Card B[]){
	bool ok = true;
	for(int i = 0; i < N; i++){
		if(A[i].suit != B[i].suit){
			ok = false;
		}
	}
	return ok;
}


void PrintArray(Card C[]){
	for(int i = 0; i < N; i++){
		printf("%c%d", C[i].suit, C[i].value);
		if(i == N - 1) printf("\n");
		else printf(" ");
	}
}

int main(void){
	char str[3];
	scanf("%d", &N);
	for(int i = 0; i < N; i++){
		scanf("%s", str);
		Input.suit = str[0];
		Input.value = str[1] - '0';
		//printf("%c%d", Input.suit, Input.value);
		B[i] = S[i] = Input;
	}
	//PrintArray(B);
	//PrintArray(S);
	BubbleSort(B);
	SelectionSort(S);

	PrintArray(B);
	printf("Stable\n");
	PrintArray(S);
	if(CompareCards(B, S) == true) printf("Stable\n");
	else printf("Not stable\n");

	return 0;
}