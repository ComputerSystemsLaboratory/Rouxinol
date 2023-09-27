#include<iostream>
using namespace std;

struct Card { char suit, value; }; 

void bubble(struct Card a[], int n); //n -> how many cards
void selection(struct Card a[], int n);
void print(struct Card a[], int n);
bool isStable(struct Card a[], struct Card b[], int n); //equal or not

int main() {
  int n;
  cin >> n;
  
  Card c1[36], c2[36];
  for ( int i = 0; i < n; i++ ) {
      cin >> c1[i].suit >> c1[i].value;
  }
  for ( int i = 0; i < n; i++ ) c2[i] = c1[i];
  bubble(c1, n);
  selection(c2, n);
  print(c1, n);
  cout << "Stable" << endl; //bubble must be stable
  print(c2, n);
  if ( isStable(c1, c2, n) ) { //compare to bubble
      cout << "Stable" << endl;
  } else {
      cout << "Not stable" << endl;
  }
  return 0;
}

void bubble(struct Card a[], int n) { //c1
    //like bubble float up every step
    for ( int i = 0; i <= n - 1; i++ ) 
        for ( int j = n - 1; j >= i + 1; j-- ) //float up
            if ( a[j].value < a[j - 1].value ) { //a is not c1
                //decide j j-1 index first and up to for 
                Card tmp = a[j]; a[j] = a[j - 1]; a[j - 1] = tmp; 
            }
}

void selection(struct Card a[], int n) {
    int j;
    for ( int i = 0; i < n; i++ ) { //fixed
    int minj = i;
        for ( j = i; j < n; j++ ) 
            if ( a[j].value < a[minj].value ) minj = j;
        Card tmp = a[i]; a[i] = a[minj]; a[minj] = tmp; 
        //in the original order
    } 
}

void print(struct Card a[], int n) {
    for ( int i = 0; i < n; i++ ) {
        cout << a[i].suit << a[i].value;
        if ( i != n - 1 ) cout << " ";
    }
    cout << endl;
}

bool isStable(struct Card a[], struct Card b[], int n) {
    int c = 0;
    for ( int i = 0; i < n; i++ ) {
        if ( a[i].suit == b[i].suit && a[i].value == b[i].value ) c++;
    }
    if ( c == n ) return true;
    else return false;
}


