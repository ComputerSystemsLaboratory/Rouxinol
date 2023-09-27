#include<iostream>
using namespace std;

#define MAX 40

int n;
pair<char, int> card4Bubble[MAX];
pair<char, int> card4Selection[MAX];

void bubbleSort();
void selectionSort();

int main(void) {

  char type;
  int number;

  cin >> n;

  //input.
  for(int i = 0; i < n; i++) {
    cin >> type;
    cin >> number;
    card4Bubble[i].first = type;
    card4Bubble[i].second = number;

    card4Selection[i].first = type;
    card4Selection[i].second = number;
  }


  bubbleSort();
  selectionSort();


  //bubble sort is stable sort.
  for(int i = 0; i < n; i++) {
    if(i == 0) {
      cout << card4Bubble[i].first << card4Bubble[i].second;
    }
    else {
      cout << " " << card4Bubble[i].first << card4Bubble[i].second;
    }
  }
  cout << endl;
  cout << "Stable" << endl;


  int flag = 1;

  for(int i = 0; i < n; i++) {
    //check stable.
    if(card4Bubble[i].first != card4Selection[i].first) {
      flag = 0;
    }
    if(i == 0) {
      cout << card4Selection[i].first << card4Selection[i].second;
    }
    else {
      cout << " " <<card4Selection[i].first << card4Selection[i].second;
    }
  }
  cout << endl;

  if(flag) {
    cout << "Stable" << endl;
  }
  else {
    cout << "Not stable" << endl;
  }
  return 0;
}

void bubbleSort() {
  for(int i = 0; i < n; i++) {
    for(int j = n - 1; j > i; j--) {
      if(card4Bubble[j].second < card4Bubble[j - 1].second) {
        pair<char, int> tmp;
        tmp = card4Bubble[j];
        card4Bubble[j] = card4Bubble[j - 1];
        card4Bubble[j - 1] = tmp;
      }
    }
  }
}

void selectionSort() {
  for(int i = 0; i < n; i++) {
    int minJ = i;
    for(int j = i; j < n; j++) {
      if(card4Selection[j].second < card4Selection[minJ].second) {
        minJ = j;
      }
    }
    pair<char, int> tmp;
    tmp = card4Selection[i];
    card4Selection[i] = card4Selection[minJ];
    card4Selection[minJ] = tmp;
  }
}