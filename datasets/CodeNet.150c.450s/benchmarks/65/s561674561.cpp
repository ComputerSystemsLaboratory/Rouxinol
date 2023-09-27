#include <iostream>
#include <map>
#include <vector>

using namespace std;

typedef pair<char, int> Card;

vector<Card> Bubble(vector<Card> A) {
  for (int i = 0; i < A.size(); i++) {
    for (int j = A.size()-1; j > i; j--) {
      if (A[j].second < A[j-1].second) swap(A[j], A[j-1]);
    }
  }
  return A;
}

vector<Card> Selection(vector<Card> A) {
  for (int i = 0; i < A.size(); i++) {
    int mini = i;
    for (int j = i; j < A.size(); j++) {
      if (A[j].second < A[mini].second) mini = j;
    }
    swap(A[i], A[mini]);
  }
  return A;
}

void print(vector<Card> org, vector<Card> A) {
  for (int i = 0; i < A.size(); i++) {
    cout << A[i].first << A[i].second;
    if (i != A.size()-1) cout << ' ';
    else cout << endl;
  }

  multimap<int, char> o, a;
  for (int i = 0; i < org.size(); i++) {
    o.insert(pair<int, char>(org[i].second, org[i].first));
    a.insert(pair<int, char>(A[i].second, A[i].first));
  }

  bool flg = true;
  for (int i = 1; i <= 9; i++) {
    int count = o.count(i);
    if (count > 1) {
      multimap<int, char>::iterator o_itr = o.find(i), a_itr = a.find(i);
      for (int j = 0; j < count; j++) {
	if (o_itr->second != a_itr->second) {
	  flg = false;
	  break;
	}
      }
    }
    if (!flg) break;
  }
  if (!flg) cout << "Not stable" << endl;
  else cout << "Stable" << endl;
}

int main(int argc, char* argv[]) {
  int N; cin >> N;
  vector<Card> A(N);

  int diff = 0-'0';
  for (int i = 0; i < N; i++) {
    string s; cin >> s;
    A[i] = Card(s[0], s[1]+diff);
  }

  print (A, Bubble(A));
  print (A, Selection(A));
  
  return 0;
}