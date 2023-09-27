#include <iostream>
using namespace std;


int main()
{
  int N , A[100] , cnt = 0;

  cin >> N;
  for( int i = 0; i < N; i++ )
    {
      cin >> A[i];
    }
  
  for( int i = 0; i < N; i++ )
    {
      for ( int j = 0; j < N-1; j++ )
	{
	  if( A[j] > A[j+1])
	    {
	      swap(A[j],A[j+1]);
	      cnt++;
	    }
	}
    }

   for( int i = 0; i < N; i++ )
    {
      cout <<  A[i];
      if( i != N-1 ) cout << " ";
      
    }
   cout << endl;
   cout << cnt << endl;
   


  return 0;
}

   