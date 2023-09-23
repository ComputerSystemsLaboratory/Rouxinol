#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int A[100] , N , key = 0 , j;
    
    cin >> N;
    for( int i = 0; i < N; i++ ){
	cin >> A[i];
    }
    
    for( int i = 1; i <= N; i++ ){
	for( int k = 0; k < N; k++ ){
	    cout << A[k];
	    if( k != N-1 )
		cout << " ";
	}
	cout << endl;
	key = A[i];
	j = i - 1;
	while( j >= 0 && A[j] > key ){
	    A[j+1] = A[j];
	    j--;
	    A[j+1] = key;
	    
	}
    }
    
    
    
    return 0;
}