#include <iostream>
#include <algorithm>
using namespace std;

void BubbleSort(string C[], int N)
{
  for(int i = 0; i < N; i++)
    for(int j = N - 1; j > i; j--)
      if(C[j][1] < C[j - 1][1])
	swap(C[j], C[j - 1]);
}

void SelectionSort(string C[], int N)
{
  for(int i = 0, minj; i < N; i++){
    minj = i;
    for(int j = i; j < N; j++)
      if(C[j][1] < C[minj][1])
	minj = j;
    swap(C[i], C[minj]);
  }
}

int main()
{
  int N;
  cin >> N;
  string a[N];
  string b[N];
  for(int i = 0; i < N; i++)
    cin >> a[i];
  copy(a, a + N, b);
  BubbleSort(a, N);
  for(int i = 0; i < N; i++)
    if(i)
      cout << " " << a[i];
    else 
      cout << a[i];
  cout << endl << "Stable" << endl;
  SelectionSort(b, N);
  for(int i = 0; i < N; i++)
    if(i)
      cout << " " << b[i];
    else 
      cout << b[i];
  cout << endl; 
  if(includes(a, a + N, b, b + N))
    cout << "Stable" << endl;
  else
    cout << "Not stable" << endl;
}