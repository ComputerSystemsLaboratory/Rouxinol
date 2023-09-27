#include <iostream>
#include <algorithm>
#define REP(i, n) for(int (i) = 0; (i) < (n); (i)++)
using namespace std;

int main()
{
  int N;
  cin >> N;
  string ID[N];
  REP(i, N)
    cin >> ID[i];
  int M, state;
  string T;
  state = 1;
  cin >> M;
  REP(i, M){
    cin >> T;
    if(find(ID, ID + N, T) != ID + N){
      if(state){
        cout << "Opened by " << T << endl;
        state = 0;
      }else{
        cout << "Closed by " << T << endl;
        state = 1;
      }
    }else{
      cout << "Unknown " << T << endl;
    }
  }
}