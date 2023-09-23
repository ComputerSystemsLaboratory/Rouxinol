#include <iostream>
using namespace std;

int selectionSort(int A[], int N)
{
  int s = 0;
  for(int i = 0, minj; i < N; i++){
    minj = i;
    for(int j = i; j < N; j++)
      if(A[j] < A[minj])
	minj = j;
    if(i != minj){
      swap(A[i], A[minj]);
      s++;
    }
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
  int s = selectionSort(A, N);
  for(int i = 0; i < N; i++)
    if(i)
      cout << " " << A[i];
    else 
      cout << A[i];
  cout << endl << s << endl;
}