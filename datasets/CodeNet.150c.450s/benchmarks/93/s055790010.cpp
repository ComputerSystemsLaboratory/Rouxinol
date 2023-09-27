#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct card{
  int number, id;
  string suit;
};

void swap(card* c[], int i, int j){
  card* tmp;
  tmp = c[i];
  c[i] = c[j];
  c[j] = tmp;
}

int partition(card* c[], int p, int r){
  int x;
  x = c[r]->number;
  int i;
  i = p-1;
  for (int j=p; j<r; j++){
    if (c[j]->number <= x){
      i++;
      swap(c,i,j);
    }
  }
  swap(c,i+1,r);
  return i+1;
}

void quicksort(card* c[], int p, int r){
  if (p<r){
    int q;
    q = partition(c,p,r);
    quicksort(c,p,q-1);
    quicksort(c,q+1,r);
  }
}

void printcards(int n, card* c[]){
  for (int i=0; i<n; i++){
    cout << c[i]->suit << " " << c[i]->number << endl;
  }
}

int main(){
  int n;
  cin >> n;

  card* c[n];
  int tmp_number;
  string tmp_suit;
  card* tmp_card;
  for (int i=0; i<n; i++){
    cin >> tmp_suit;
    cin >> tmp_number;
    tmp_card = new card;
    tmp_card->number = tmp_number;
    tmp_card->suit = tmp_suit;
    tmp_card->id = i;
    c[i] = tmp_card;
  }

  quicksort(c,0,n-1);

  bool stableflg = true;
  for (int i=0; i<n-1; i++){
    if (c[i]->number == c[i+1]->number && c[i]->id > c[i+1]->id){
      stableflg = false;
      break;
    }
  }

  if (stableflg){
    cout << "Stable" << endl;
  }
  else{
    cout << "Not stable" << endl;
  }

  printcards(n,c);

  return 0;
}

