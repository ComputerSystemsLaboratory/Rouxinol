#include "bits/stdc++.h"
using namespace std;

int bubbleSort(vector<int> &A, int N);

int main(void){

  int N;
  cin >> N;

  vector<int> A(N);
  for(int i = 0; i < N; i++) cin >> A.at(i);
  int count = bubbleSort(A, N);

  for(int i = 0; i < N; i++)
  {
    cout << A.at(i);
    if(i == N-1) cout << endl;
    else cout << " ";
  }
  cout << count << endl;

  return 0;

}

int bubbleSort(vector<int> &A, int N)
{
  int count = 0;
  bool flag = true;
  while(flag)
  {
    flag = false;
    for (int j = N-1; 0 < j; j--)
    {
      if(A.at(j) < A.at(j-1))
      {
        swap(A.at(j), A.at(j-1));
        flag = true;
        count++;
      }
    }
  }
  return count;
}
