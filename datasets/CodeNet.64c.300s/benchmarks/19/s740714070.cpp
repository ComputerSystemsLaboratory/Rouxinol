#include <iostream>
using namespace std;

inline int max(int a, int b){
	return (a>b)? a : b ;
}

int main(){
	int n, max1, max2, a[5001];

	while( cin >> n , n ){
		for(int i=0 ; i<n ; i++){
			cin >> a[i] ;
		}
		max1 = a[0];

		for(int i=0 ; i<n ; i++){
			int sum = 0;
			for(int j=i ; j<n ; j++){
				sum += a[j];
				max1 = max( max1 , sum );
			}
		}
		cout << max1 << endl;
	}
}