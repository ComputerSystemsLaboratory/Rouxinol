#include <iostream>
using namespace std;

int bubbleSort(int A[], int N)
{
  int s = 0;
  for(int i = 0; i < N - 1; i++)
    for(int j = N - 1; j > i; j--)
      if(A[j] < A[j - 1]){
	int tmp = A[j - 1];
	A[j - 1] = A[j];
	A[j] = tmp;
	s++;
      }
  return s;
}

int main()
{
  int N;
  cin >> N;
  int A[N];
  for(int i = 0; i < N; i++)
    cin >> A[i];
  int n = bubbleSort(A, N);
  for(int i = 0; i < N; i++)
    if(i)
      cout << " " << A[i];
    else 
      cout << A[i];
  cout << endl << n << endl;
}