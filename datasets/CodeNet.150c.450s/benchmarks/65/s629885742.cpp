#include <iostream>
#define rep(i,a) for(i = 0; i < a; i++)
using namespace std;

class Card {
public:
  string suit;
  int value;
  void InputCard(string T);
};

void Card::InputCard(string T) {
  suit = T[0];
  value = T[1] - '0';
}

void print(Card card[],int n) {
  int i;
  rep(i,n){
    if(i > 0){
      cout << " ";
    }
    cout << card[i].suit << card[i].value;
  }
  cout << endl;
}

void bubblesort(Card card[],int n) {
  int i;
  rep(i,n) {
    for(int j = n-1; j > i; j--) {
      if(card[j].value < card[j-1].value) {
	swap(card[j],card[j-1]);
      }
    }
  }
}

void selectionsort(Card card[],int n) {
  int i;
  rep(i,n) {
    int minj = i;
    for(int j = i; j < n; j++) {
      if(card[j].value < card[minj].value) {
	minj = j;
      }
    }
    swap(card[i],card[minj]);
  }
}

bool isStable(Card card1[], Card card2[], int n) {
  int i;
  rep(i,n) {
    if(card1[i].suit != card2[i].suit) {
      return false;
    }
  }
  return true;
}

int main(void) {
  int i,n;
  string T;
  cin >> n;
  Card *Card1 = new Card[n];
  Card *Card2 = new Card[n];
  rep(i,n) {
    cin >> T;
    Card1[i].InputCard(T);
    Card2[i].InputCard(T);
  }

  bubblesort(Card1,n);
  selectionsort(Card2,n);

  print(Card1,n);
  cout << "Stable" << endl;
  print(Card2,n);

  if(isStable(Card1,Card2,n)) {
    cout << "Stable" << endl;
  } else {
    cout << "Not stable" << endl;
  }

  return 0;

}