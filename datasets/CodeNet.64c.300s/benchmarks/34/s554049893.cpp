#include <iostream>
using namespace std;
static int const MIN_COUNT = 1;
static int const MAX_COUNT = 1000;
static int const MIN_VALUE = 0;
static int const MAX_VALUE = 1e3;

int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)cin>>A[i];

    cout << A[0];
    for(int i=1;i<N;i++)cout << " " << A[i];
    cout << endl;

    for(int i=1;i<=N-1;i++){
      int v=A[i];
      int j=i-1;
      while(j>=0 && A[j] > v){
        A[j+1] =A[j];
        j--;
        A[j+1] = v;
      }

      cout << A[0];
      for(int i=1;i<N;i++)cout << " " << A[i];
      cout << endl;

    }
    return 0;
}