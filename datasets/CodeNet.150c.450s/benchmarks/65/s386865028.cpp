#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, N) for (int i = 0; i < (int)N; i++)

struct card {
  int num;
  char suit;
};

bool operator==(const card &lhs, const card &rhs) {
  return lhs.num == rhs.num && lhs.suit == rhs.suit;
}

vector<card> bubbleSort(vector<card> c) {
  int n = c.size();
  rep(i,n) for(int j = n - 1; j > i; j--) {
    if(c[j-1].num > c[j].num) swap(c[j], c[j-1]);
  }
  return c;
}

vector<card> selectionSort(vector<card> c) {
  int n = c.size();
  for(int i = 0; i < n - 1; i++) {
    int mini = i;
    for(int j = i + 1; j < n; j++) {
      if(c[j].num < c[mini].num) mini = j;
    }
    swap(c[i], c[mini]);
  }
  return c;
}


int main () {
  int n;

  scanf("%d\n", &n);
  vector<card> c(n);

  rep(i,n){
    if(i > 0) scanf(" ");
    scanf("%c%d", &c[i].suit, &c[i].num);
  }

  vector<card> bsorted = bubbleSort(c);
  rep(i,n) {
    if(i > 0) printf(" ");
    printf("%c%d", bsorted[i].suit, bsorted[i].num);
  }
  printf("\nStable\n");

  vector<card> ssorted = selectionSort(c);
  rep(i,n) {
    if(i > 0) printf(" ");
    printf("%c%d", ssorted[i].suit, ssorted[i].num);
  }
  printf("\n");
  printf(bsorted == ssorted ? "Stable" : "Not stable");
  printf("\n");

  return 0;
}