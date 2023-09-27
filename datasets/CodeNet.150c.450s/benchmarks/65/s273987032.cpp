#include <iostream>
using namespace std;
struct card {
	char 	suit;
	int		num;
};

void bubbleSort (struct card C[], int N){
	bool flag = 1;
	for (int i = 0; flag; i++){
		flag = 0;
		for (int j = N-1; j >= i+1; j--){
			if (C[j].num < C[j - 1].num){
				swap(C[j], C[j-1]);
				flag = 1;
			}
		}
	}
}

void selectSort (struct card C[], int N){
	for (int i = 0; i < N; i++){
		int minj = i;
		for(int j = i + 1; j < N; j++){
			if (C[minj].num > C[j].num){
				minj = j;
			}
		}
		swap(C[i], C[minj]);
	}
}

bool isStable (struct card C1[], struct card C2[], int N){
	bool t = true;
	for ( int i = 0; i < N; i++){
		if ( C1[i].suit != C2[i].suit  ) t = false;
	}
	return t;
}

int main(){
	int N = 0;
	cin >> N;
	card C1[N];
	
	for (int i = 0; i < N;i++){
		cin >> C1[i].suit >> C1[i].num;
	}
	card bubble[N];
	card select[N];
	for (int i = 0;i < N; i++){
		bubble[i].suit = C1[i].suit;
		bubble[i].num = C1[i].num;
	}
	for (int i = 0;i < N; i++){
		select[i].suit = C1[i].suit;
		select[i].num = C1[i].num;
	}
	
	bubbleSort(bubble, N);
	selectSort(select, N);
	
	for (int i = 0; i < N; i++){
		if(i) cout << " ";
		cout << bubble[i].suit << bubble[i].num;
	}
	cout  << endl;
	
	if(isStable(bubble, bubble, N)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	
	for (int i = 0; i < N; i++){
		if (i) cout << " ";
		cout << select[i].suit << select[i].num;
	}
	cout << endl;
	if(isStable(bubble, select, N)) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
	
	return 0;
}
