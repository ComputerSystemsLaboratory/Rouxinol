#include <iostream>
using namespace std;
int main(){
	int n,a[100];
	cin>>n;
	for(int i=0 ; i<n ; i++ )
		cin >> a[i];
	int counter=0;
	for( int i=0 ; i<n ; i++ ){
		int minj=i;
		for( int j=i ; j<n ; j++ ){
			if( a[j] < a[minj] ){
				minj=j;
			}
		}
		if( i!=minj ){
			counter++;
			swap(a[i],a[minj]);
		}
	}
	for( int i=0 ; i<n ; i++ ){
		cout << a[i] ;
		if( i!=n-1 )
			cout <<" ";
	}
	cout << endl;
	cout << counter << endl;
	return 0;
}