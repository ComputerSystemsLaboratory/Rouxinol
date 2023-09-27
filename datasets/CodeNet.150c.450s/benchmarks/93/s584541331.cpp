#include <stdlib.h>
#include <iostream>
using namespace std;

struct card{
	int val;
	char suit;
	int id;
	card(){
		val = 0;
		suit = ' ';
		id = 0;
	}
	card(card *c){
		val = c->val;
		suit = c->suit;
		id = c->id;
	}
};

int partition(card *cards, int left, int right);
void swap(int *a, int *b);
void quick_sort(card *cards, int left, int right);
void print_cards(card *cards, int left, int right);
bool is_stable(card *cards, int left, int right);
int main(){
	int n;

	cin >> n;

	card* cards = (card*)calloc((n+1), sizeof(card));

	if(n < 1){
		return 0;
	}

	for(int i = 0; i < n; i++){
		cin >> cards[i].suit;
		cin >> cards[i].val;
		cards[i].id = i;
	}
	quick_sort(cards, 0, n-1);
	if(is_stable(cards, 0, n)){
		cout << "Stable" << endl;
	}else{
		cout << "Not stable" << endl;
	}
	print_cards(cards, 0, n);
	return 0;
}
int partition(card *cards, int left, int right){
	int x = cards[right].val;
	int i = left - 1;
	for(int j = left; j < right; ++j){
		if(cards[j].val <= x){
			++i;
			if(i != j){
				swap(cards[i], cards[j]);
			}
		}
	}
	if(i+1 != right){
		swap(cards[i+1], cards[right]);
	}
	return i+1;
}

void swap(card *a, card *b){
	card *temp = new card(b);
	b = a;
	a = temp;
	free(temp);
}

void quick_sort(card *cards, int left, int right){
	if(left < right){
		int q = partition(cards, left, right);
		quick_sort(cards, left, q-1);
		quick_sort(cards, q+1, right);
	}
}


void print_cards(card *cards, int left, int right){
	for(int i = left; i < right; ++i){
		cout <<  cards[i].suit << " " << cards[i].val << endl;
	}
}

bool is_stable(card *cards, int left, int right){
	for(int i = left; i < right-1; ++i){
		if(cards[i].val == cards[i+1].val && cards[i].id > cards[i+1].id) return false;
	}
	return true;
}