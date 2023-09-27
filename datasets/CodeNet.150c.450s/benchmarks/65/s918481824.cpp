#include <stdlib.h>
#include <iostream>
using namespace std;

struct card{
	char value;
	char suit;
};
void bubble_sort(card *array, int n);
void selection_sort(card *array, int n);
bool is_stable(card *stable, card *compare, int n);
void print_array(card *array, int size);
void print_stable(bool is_stable);

int main(){
	int n;

	cin >> n;

	card* bubble = (card*)malloc(n * sizeof(card));
	card* select = (card*)malloc(n * sizeof(card));

	if(n < 1){
		return 0;
	}

	for(int i = 0; i < n; i++){
		string card;
		cin >> card;

		bubble[i].suit  = card[0];
		bubble[i].value = card[1];

		select[i].suit  = card[0];
		select[i].value = card[1];
	}
	bubble_sort(bubble, n);
	selection_sort(select, n);

	print_array(bubble, n);
	// bubble sort is always stable
	print_stable(true);

	print_array(select, n);
	print_stable(is_stable(bubble, select, n));
	return 0;
}

void bubble_sort(card *array, int n){
	for(int i = n-1; i > 0; --i){
		bool is_swaped = false;
		for(int j = 0; j < i; ++j){
			if(array[j].value > array[j+1].value){
				swap(array[j], array[j+1]);
				is_swaped = true;
			}
		}
		if(!is_swaped){
			return;
		}
	}
}
void selection_sort(card *array, int n){
	for(int i = 0; i < n; ++i){
		bool is_swaped = false;
		int minj = i;
		for(int j = i; j < n; ++j){
			if(array[j].value < array[minj].value){
				minj = j;
				is_swaped = true;
			}
		}
		if(is_swaped){
			swap(array[i], array[minj]);
		}
	}
}

void print_array(card *array, int size){
	for(int i = 0; i < size; i++){
		cout <<  array[i].suit << array[i].value;
		if(i != size - 1){
		cout << " " ;
		}
	}
	cout << endl;
}

bool is_stable(card *stable, card *compare, int n){
	for(int i = 0; i < n; ++i){
		if(stable[i].suit != compare[i].suit){
			return false;
		}
	}
	return true;
}
void print_stable(bool is_stable){
	if(is_stable){
		cout << "Stable" << endl;
	}else{
		cout << "Not stable" << endl;
	}
}