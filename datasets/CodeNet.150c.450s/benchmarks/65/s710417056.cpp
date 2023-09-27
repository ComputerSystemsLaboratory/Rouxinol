#include <iostream>
#include <algorithm>
using namespace std;

struct Card { char suit, value;};

void selection(struct Card A[], int n) {
   for(int i = 0; i < n; i++) {
	   int minj = i;
	   for(int j = i+1; j < n; j++) {
		   if(A[minj].value > A[j].value) minj = j;
	   }
	Card t = A[i]; A[i] = A[minj]; A[minj] = t;   
   }
}

void print(struct Card A[], int n) {
	for(int i = 0; i < n; i++) {
		if(i) cout << " ";
		cout << A[i].suit << A[i].value;
	} cout << endl;
}

void bubble(struct Card a[], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = n-1; j >= i+1; j--) {
			if(a[j].value < a[j-1].value) {
				Card t = a[j]; a[j] = a[j-1]; a[j-1] = t;
			}
		}
	}
}

bool isStable(struct Card c1[], struct Card c2[], int n) {
	for(int i = 0; i < n; i++) {
		if(c1[i].suit != c2[i].suit) return false;
	}
	return true;
}

int main(void){
   Card c1[100], c2[100];
   int n;
   char ch;

   cin >> n;
   for(int i = 0; i < n; i++) {
	   cin >> c1[i].suit >> c1[i].value;
	   c2[i].suit = c1[i].suit;
	   c2[i].value = c1[i].value;
   }

   bubble(c1, n);
   selection(c2, n);
   print(c1, n);
   cout << "Stable" <<endl;
   print(c2, n);
   if( isStable(c1, c2, n) ) cout << "Stable" <<endl;
   else cout << "Not stable" <<endl;

   return 0;
}