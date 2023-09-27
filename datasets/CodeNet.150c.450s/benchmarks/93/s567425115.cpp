#include <bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9;

struct Card{
  char c;
  int num;
};

int N;
Card a[100010];
Card b[100010];

void swap( Card& a, Card& b ){
  Card tmp = a;
  a = b;
  b = tmp;
}

int Partition( int p, int r ){
  int x = a[r].num;
  int i = p - 1;
  for( int j = p; j < r; j++ ){
    if( a[j].num <= x ){
      i++;
      ::swap( a[i], a[j] ); 
    }
  }
  ::swap( a[i + 1], a[r] );

  return i + 1;
}

void QuickSort( int p, int r ){
  if( p < r ){
    int q = Partition( p, r );
    QuickSort( p, q - 1 );
    QuickSort( q + 1, r );
  }
}

void merge( Card* a, int left, int mid, int right ){
  int n1 = mid - left;
  int n2 = right - mid;
  Card* L = new Card[n1 + 1];
  Card* R = new Card[n2 + 1];
  for( int i = 0; i < n1; i++ ) L[i] = a[left + i];
  for( int i = 0; i < n2; i++ ) R[i] = a[mid + i];
  L[n1].num = INF;
  R[n2].num = INF;

  int i = 0, j = 0;
  for( int k = left; k < right; k++ ){
    if( L[i].num <= R[j].num ){
      a[k] = L[i++];
    }else{
      a[k] = R[j++];
    }
  }
}

void mergeSort( Card* a, int left, int right ){
  if( right - left > 1 ){
    int mid = ( right + left ) / 2;
    mergeSort( a, left, mid );
    mergeSort( a, mid, right );
    merge( a, left, mid, right );
  }
}


int main(){
  cin >> N;
  for( int i = 0; i < N; i++ ){
    cin >> a[i].c >> a[i].num;
    b[i] = a[i];
  }

  QuickSort( 0, N - 1 );
  mergeSort( b, 0, N );

  bool f = true;
  for( int i = 0; i < N; i++ ){
    if( a[i].c != b[i].c ){
      f = false;
      break;
    }
  }

  if( f ) cout << "Stable" << endl;
  else cout << "Not stable" << endl;
  
  for( int i = 0; i < N; i++ ){
    cout << a[i].c << " " << a[i].num << endl;
    // cout << b[i].c << " " << b[i].num << endl;
  }

  

    
}

