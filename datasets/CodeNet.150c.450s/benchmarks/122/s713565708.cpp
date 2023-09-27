#include<iostream>
#include<string>
#include<queue>
using namespace std;

void maxHeapify(vector < int > &A, int n, int i ) {
	int L = i * 2;
	int R = i * 2 + 1;

	int largest=i;
	if( L <= n && A[largest] < A[L] ) largest = L;
	if( R <= n && A[largest] < A[R] ) largest = R;
    
    if( largest != i ) {
    	swap( A[i], A[largest] );
        maxHeapify( A, n, largest );
    }
}
void  insertKey( vector< int > &priorityQ, int key ) {
	priorityQ.push_back( key );
	int n = priorityQ.size() - 1; 
	 while ( n > 1 && priorityQ[n] > priorityQ[n/2] ) {
	 	swap(  priorityQ[n], priorityQ[n/2] );
	 	n = n / 2;
	 }
}
int main() {
	string op;
	int key;
	vector < int > priorityQ;
	priorityQ.push_back( -1 );
	while( cin >> op ) {
		if ( op == "insert" ) {
			cin >> key;
			insertKey ( priorityQ, key );
		} else if ( op == "extract" ) {
		 if(priorityQ.size() > 1 ) {
           cout << priorityQ[1] << endl;
           swap( priorityQ[1], priorityQ[priorityQ.size()-1]);
           priorityQ.erase( priorityQ.end()-1 );
           maxHeapify( priorityQ, priorityQ.size()-1, 1 );
         
       }

		} else if ( op == "end" ) break;
	}
}
