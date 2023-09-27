/*
created at 6.9.2015 by charis
last edited at 6.9.2015 by charis
*/

#include<iostream>
using namespace std;

int main(){
	int n, q;
	cin >> n ;
	int S[n];
	for(int i=0; i<n; i++){
		cin >> S[i] ;
	}
	cin >> q ;
	int T[q];
	for(int j=0; j<q; j++){
		cin >> T[j] ;
	}
	
	int C = 0 ;
	for(int j=0; j<q; j++){
		int t = T[j] ;
		for(int i=0; i<n; i++){
			if(S[i] == t){
				C++;
				break;
			}
		}
	}
	
	cout << C << endl;
	return 0;
}