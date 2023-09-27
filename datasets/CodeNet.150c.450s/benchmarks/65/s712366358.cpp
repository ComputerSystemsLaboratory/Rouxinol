#include<iostream>

using namespace std;

struct Card{
	char mark;
	int value;
};

bool isStable(struct Card C1[],struct Card C2[], int n){
	for (int i = 0; i < n; i++){
		if ( C1[i].mark != C2[i].mark) return false;
	}
	return true;
}


void printary(struct Card A[],int n){

	for (int i = 0; i < n; i++){
		cout << A[i].mark << A[i].value;
		if ( i != n-1){
			cout << " ";
		}
	}
	cout << endl;
}


void bubblesort(struct Card B[], int n){
	bool flag = false;
	int j = 0;
	while (!flag){
		flag = true;
		for (int i = n-1; i > j; i--){
			if (B[i].value < B[i-1].value){
				struct Card tmp = B[i];
				B[i] = B[i-1];
				B[i-1] = tmp;
				flag = false;
			}
		}
		j++;
	}
	printary(B,n);
	cout << "Stable" << endl;

}

void selectsort(struct Card C[],int n){
	for ( int i = 0; i < n; i++){
		int min = C[i].value;
		int minj = i;
		for ( int j = i+1; j < n; j++){
			if (min > C[j].value){
				min = C[j].value;
				minj = j;
			}
		}	
		struct Card tmp = C[i];
		C[i] = C[minj];
		C[minj] = tmp;
	}
	printary(C,n);
}

int main(){
	int n; cin >> n;
	struct Card card1[40];	
	struct Card card2[40];	
	for (int i = 0; i < n; i++){
		cin >> card1[i].mark >> card1[i].value;
		card2[i] = card1[i];
	}

	bubblesort(card1,n);
	selectsort(card2,n);

	if (isStable(card1,card2,n)){
		cout << "Stable" << endl;
	}else{
		cout << "Not stable" << endl;
	}


	return 0;
}