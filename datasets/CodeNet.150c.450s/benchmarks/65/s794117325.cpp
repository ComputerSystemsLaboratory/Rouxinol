#include<iostream>
using namespace std;

struct Card{ char suit;int value; };

void bubbleSort(struct Card A[], int N){
	for(int i=0;i<N;i++){
		for(int j=N-1;j>i;j--){
			if(A[j].value < A[j-1].value){
				struct Card t = A[j];
				A[j] = A[j-1];
				A[j-1] = t;
			}
		}
	}
}

void selectionSort(struct Card A[], int N){
	for(int i=0;i<N;i++){
		int minj=i;
		for(int j=i;j<N;j++){
			if(A[minj].value > A[j].value) minj = j;
		}
		if(minj != i){
			struct Card t = A[minj];
			A[minj] = A[i];
			A[i] = t;
		}
	}
}

bool isStable(struct Card A1[],struct Card A2[],int N){
	for(int i=0;i<N;i++){
		if(A1[i].suit != A2[i].suit) return false;
	}
	return true;
}

void print(struct Card A[],int N){
	for(int i=0;i<N;i++){
		if(i) cout<<" ";
		cout<<A[i].suit<<A[i].value;
	}
	cout<<endl;

}

int main(){
	int N;
	cin>>N;
	struct Card C1[36],C2[36];
	for(int i=0;i<N;i++){
		cin>>C1[i].suit>>C1[i].value;
	}
	
	for(int i=0;i<N;i++){
		C2[i] = C1[i];
	}
	
	bubbleSort(C1,N);
	print(C1,N);
	cout<<"Stable"<<endl;
	selectionSort(C2,N);
	print(C2,N);
	if(isStable(C1,C2,N)){
		cout<<"Stable"<<endl;
	}else{
		cout<<"Not stable"<<endl;
	}
	
	return 0;
}