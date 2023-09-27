#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

class Card{
  public:
    string name;
    int number;
};

bool CardsSortPredicate(const Card& c1, const Card& c2)
{
  return c1.number < c2.number;
}

int partition(vector<Card> &A, int p, int last){
  int x = A[last].number;
  int bigger_first_ind = p - 1;
  for(int j = p; j < last; j++){
    if(A[j].number <= x) swap(A[++bigger_first_ind], A[j]);
  }
  swap(A[++bigger_first_ind], A[last]);
  return bigger_first_ind;
}

void quicksort(vector<Card> &A, int p, int r){
  if(p < r){
    int q = partition(A, p, r);
    quicksort(A, p, q-1);
    quicksort(A, q+1, r);
  }
}

int main(){
  int n;
  cin >> n;
  vector<Card> cards1, cards2;
  for(int i = 0; i < n; i++){
    string s;
    int n;
    cin >> s >> n;
    Card c; c.name = s; c.number = n;
    cards1.push_back(c);
    cards2.push_back(c);
  }
  quicksort(cards1, 0, n-1);
  stable_sort(cards2.begin(), cards2.end(), CardsSortPredicate); // stl???????????????????????????????????????
  bool flag = true;

  for(int i = 0; i < n; i++){
    if(cards1[i].name != cards2[i].name || cards1[i].number != cards2[i].number){
      flag = false;
      cout << "Not stable" << endl;
      break;
    }
  }
  if(flag == true) cout << "Stable" << endl;
  for(int i = 0; i < n; i++){
    cout << cards1[i].name << " " << cards1[i].number << endl;
  }

}