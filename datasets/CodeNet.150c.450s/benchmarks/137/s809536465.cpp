#include <iostream>
using namespace std;

#define M 1046527
#define L 14

string H[M];

int getChar(char ch){
  if ( ch == 'A') return 1;
  else if ( ch == 'C') return 2;
  else if ( ch == 'G') return 3;
  else if ( ch == 'T') return 4;
  else return 0;
}

long long getKey(string s){
  long long sum = 0, p = 1, i;
  for ( i = 0; i < s.size(); i++ ){
    sum += p*(getChar(s[i]));
    p *= 5;
  }
  return sum;
}

int h1(int key){ return key % M; }
int h2(int key){ return 1 + (key % (M-1)); }

bool find(string s) {
  long long h, k;
  k = getKey(s);
  for (int i = 0;; i++) {
    h = (h1(k) + i*h2(k)) % M;
    if (H[h] == s) return true;
    else if (H[h].size() == 0) return false;
  }
  return false;
}

bool insert(string s) {
  long long h, k;
  k = getKey(s);
  for (int i = 0;; i++) {
    h = (h1(k) + i*h2(k)) % M;
    if (H[h] == s) return true;
    else if (H[h].size() == 0) {
      H[h] = s;
      return true;
    }
  }
  return false;
}

int main(){
  int i, n, h;
  string s, op;
  for ( i = 0; i < M; i++ ) H[i][0] = '\0';

  cin >> n;

  for ( i = 0; i < n; i++ ){
    cin >> op >> s;

    if ( op[0] == 'i' ){
      insert(s);
    } else {
      if (find(s)){
        cout << "yes" << endl;
      } else {
        cout << "no" << endl;
      }
    }
  }

  return 0;
}