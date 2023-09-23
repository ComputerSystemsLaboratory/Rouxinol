#include<iostream>
#include<algorithm>
using namespace std;
int main(){

	long long int A[5001]={0};
	long long int n,MAX = -100000;

		while(1){

			cin >> n;

			if( n == 0 ) break;

			for(int i = 1; i <= n; i++){

				cin >> A[i];
	
			}

			MAX = -100000;
		
			for(int i = 1; i <= n; i++){

				A[i] = max(A[i], A[i] + A[i-1]);
				MAX = max(A[i], MAX);

			}
	
			cout  << MAX << endl;

		}
	return 0;
}