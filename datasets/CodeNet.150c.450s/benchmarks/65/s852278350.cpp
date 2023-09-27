#include <iostream>
#include <utility>
using namespace std;
 
#define N 1000000
#define INF 1000000

typedef pair<char, int> Card;
 

// BubbleSort(C, N)
//   for i = 0 to N-1
//     for j = N-1 downto i+1
//       if C[j].value < C[j-1].value
//         C[j] と C[j-1] を交換
void bubSort(Card cards[], int n){
  for (int i=0; i<n; i++){
    for (int j=n-1; j>=i+1; j--){
      if (cards[j].second < cards[j-1].second){
        Card tmp;
        tmp = cards[j]; cards[j]=cards[j-1]; cards[j-1]=tmp;
      }
    }
  }
}
//SelectionSort(C, N)
//  for i = 0 to N-1
//    minj = i
//    for j = i to N-1
//      if C[j].value < C[minj].value
//        minj = j
//    C[i] と C[minj] を交換
void selSort(Card cards[], int n){
  for (int i=0; i<n; i++){
    int mnj = i;
    Card tmp;
    for (int j=i; j<n; j++){
      if (cards[j].second < cards[mnj].second) mnj = j;
    }
    tmp = cards[i]; cards[i]=cards[mnj]; cards[mnj]=tmp;
  }
}

Card readCard(){
  char s;
  int r;
  Card ret;
  cin >> s;
  ret.first = s;
  cin >> r;
  ret.second = r;
  return ret;
}
void printCard(Card c){
  cout << (char)c.first;
  cout << (int)c.second;
}

int main(void){
  int n,isStbl;
  Card cardsBub[40], cardsSel[40], tmpCard;
  
  cin >> n;
  for (int i=0; i<n; i++){
    cardsBub[i] = cardsSel[i] = readCard();
  }
  bubSort(cardsBub, n);
  selSort(cardsSel, n);
  for (int i=0; i<n; i++){
    printCard(cardsBub[i]);
    cout << (i==n-1?"\n":" ");
  }
  cout << "Stable" << endl;
  isStbl = 1;
  for (int i=0; i<n; i++){
    printCard(cardsSel[i]);
    isStbl &= (cardsSel[i]==cardsBub[i]);
    cout << (i==n-1?"\n":" ");
  }
  cout << (isStbl?"Stable":"Not stable") << endl;
  
  return 0;
}
