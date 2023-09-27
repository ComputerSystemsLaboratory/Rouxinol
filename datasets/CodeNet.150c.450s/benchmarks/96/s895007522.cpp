#include <iostream>
#include <string>
using namespace std;

char T[9][5] = 
  { {'.', ',', '!', '?', ' '}, 
    {'a', 'b', 'c'},
    {'d', 'e', 'f'},
    {'g', 'h', 'i'},
    {'j', 'k', 'l'},
    {'m', 'n', 'o'},
    {'p', 'q', 'r', 's'},
    {'t', 'u', 'v'},
    {'w', 'x', 'y', 'z'} };

int C[9] = {5, 3, 3, 3, 3, 3, 4, 3, 4};

int main() {
  int N;
  cin >> N;
  for (int k=0; k<N; k++) {
    string S;
    cin >> S;
    string A = "";
    int now;
    int count = 0;
    for (unsigned int i=0; i<S.size(); i++) {
      int x = (int)S[i] - '0';
      if (x != 0) {
	now = x;
	count++;
      } else if (count > 0){
	A += T[now-1][(count-1)%C[now-1]];
	count = 0;
      }
    }
    cout << A << endl;
  }
}