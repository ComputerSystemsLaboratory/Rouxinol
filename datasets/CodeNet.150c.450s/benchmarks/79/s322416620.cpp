#include<iostream>
#include<vector>

using namespace std;

vector<int> Deck;

void shuffle(int p, int c) {
  vector<int> tmp = Deck;
  for(int i=0; i<Deck.size(); i++) {
    if(i<c) {
      Deck[i] = tmp[p-1+i];
    }
    else if(c<=i && i<c+p-1) {
      Deck[i] = tmp[i-c];
    }
  }
}

int main() {
  int n, r;

  while(cin>>n>>r && n>0) {
    Deck.clear();
    for(int i=0; i<n; i++) {
      Deck.push_back(n-i);
    }
    for(int i=0; i<r; i++) {
      int p, c;
      cin>>p>>c;
      shuffle(p, c);
    }
    cout<<Deck[0]<<endl;
  }
}