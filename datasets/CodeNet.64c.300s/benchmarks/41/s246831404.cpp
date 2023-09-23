#include <iostream>
using namespace std;

int H, A[1000000];

//左の子の節点番号を求める
int left ( int i ) {
  return 2 * i;
}

//右の子の節点番号を求める
int right ( int i ) {
  return 2 * i + 1;
}


void maxHeapify ( int i ) {
  int l, r, largest;
  l = left(i);
  r = right(i);
  
 // 左の子、自分、右の子で値が最大のノードを選ぶ
  if ( l <= H && A[l] > A[i] ) largest = l;
  else largest = i;
  if ( r <= H && A[r] > A[largest] ) largest = r;

  if ( largest != i ) { // i の子の方が値が大きい場合
    
    int tmp;      //A[i] と A[largest] を交換
    tmp  = A[i];
    A[i] = A[largest];
    A[largest] = tmp;
    
    maxHeapify(largest); // 再帰的に呼び出し

  }
}

int main() {

  cin >> H;
  
  for ( int i = 1; i <= H; i++ ) cin >> A[i];

  //配列Aをmax-ヒープに交換する
  for ( int i = H / 2; i >= 1; i-- ) maxHeapify(i);
  
  for ( int i = 1; i <= H; i++ ) cout << " " << A[i];
  cout << endl;

  return 0;
}