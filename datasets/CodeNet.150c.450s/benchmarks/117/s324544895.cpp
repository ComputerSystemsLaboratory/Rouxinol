#include<iostream>
#include<vector>

using namespace std;

#define SENTINEL 1000000001
int n;
int cnt;

void merge( vector<int>& S, int left, int mid, int right )
{
	int n1 = mid - left;
	int n2 = right - mid;

	vector<int> L;
	vector<int> R;
	for( vector<int>::size_type i=0; i<n1; i++ ) {
	    L.push_back( S.at( left+i ) );
	}
	for( vector<int>::size_type i=0; i<n2; i++ ) {
	    R.push_back( S.at( mid+i ) );
	}
	
	L.push_back( SENTINEL );
	R.push_back( SENTINEL );	
	vector<int>::size_type i, j;
	i = j = 0;
	for( vector<int>::size_type k=left; k<right; k++ ) {
	    cnt++;
	    if( L.at(i) <= R.at(j) ) {
	        S.at(k) = L.at( i++ );
	    } else {
	        S.at(k) = R.at( j++ );
	    }
	}
	
    return;
}
void mergeSort( vector<int>& S, int left, int right )
{
	if( left+1 < right ) {
		int mid = ( left+right )/2;
		mergeSort( S, left, mid );
		mergeSort( S, mid, right );
		merge( S, left, mid, right );
	}
	return;
}

int main()
{
	cin>>n;
	vector<int> S;
	int num;
	for( int i=0; i<n; i++ ) {
		cin>>num;
		S.push_back( num );
	}
	cnt = 0;
	mergeSort( S, 0, n );
	for( vector<int>::iterator itr = S.begin(); itr!=S.end(); itr++ ) {
		cout<<*itr;
		if( itr < S.end()-1 ) { cout<<' '; }
	}
	cout<<'\n'<<cnt<<endl;	
    return 0;
}