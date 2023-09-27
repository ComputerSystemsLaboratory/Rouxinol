#include <iostream>

using namespace std;

struct card{
  char mark;
  int value;
};

void BubbleSort(struct card c[], int N){
  for(int i = 0; i < N; i++){
    for(int j = N-1; j > i; j--){
      if(c[j].value < c[j-1].value){
	card tmp = c[j];
	c[j] = c[j-1];
	c[j-1] = tmp;
      }
    }
  }
}

void SelectionSort(struct card c[], int N){
  int minj;

  for(int i = 0; i < N; i++){
    minj = i;
    for(int j = i; j < N; j++){
      if(c[j].value < c[minj].value){
	minj = j;
      }
    }
    card tmp = c[i];
    c[i] = c[minj];
    c[minj] = tmp;
  }
}

void PrintCard(struct card c[], int N){
  for(int i = 0; i < N; i++){
    if(i > 0){ cout << " "; }
    cout << c[i].mark << c[i].value;
  }
  cout << endl;
}

bool isStable(struct card c1[], struct card c2[], int N){
  for(int i = 0; i < N; i++){
    if(c1[i].mark != c2[i].mark){ return false; }
  }
  return true;
}

int main(){
  int N;
  struct card c1[36], c2[36];
  
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> c1[i].mark >> c1[i].value;
    c2[i] = c1[i];
  }

  BubbleSort(c1, N);
  PrintCard(c1, N);
  cout << "Stable" << endl;

  SelectionSort(c2, N);
  PrintCard(c2, N);
  if(isStable(c1, c2, N)){ cout << "Stable" << endl; }
  else{ cout << "Not stable" << endl; } 
  
  return 0;
}

