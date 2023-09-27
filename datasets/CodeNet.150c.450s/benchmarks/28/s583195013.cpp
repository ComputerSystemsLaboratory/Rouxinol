/*
filename:4_D-Allocation.c
created on 19.9.2015 by charis
last edited on 19.9.2015 by charis
*/

#include<iostream>
using namespace std;

bool pack(int A[], int n, int k, int p){
	int B[k] ;
	for (int j=0; j<k; j++){
		B[j] = 0 ;
	}
	/*
	for(int i=0; i<n; i++){
		for (int j=0; j<k; j++){
			B[j] += A[i] ;
			if (B[j] > p) {		
				if (j+1 == k) return false ;	
				else B[j] -= A[i] ;
			}
			else break ;
		}
	}
	*/
	int j=0; 	
	for (int i=0; i<n; i++){
		B[j] += A[i] ;
		if (B[j] > p){
			if (j+1 == k) return false ;
			else {
				B[j] -= A[i] ;
				j++ ;
				B[j] += A[i] ;
			}
		}
	}
	return true ;
}

int main(){
	int n, k, p;
	cin >> n >> k ;
	int A[n], sum=0, Max=0;
	for(int j=0; j<n; j++){
		int x ;
		cin >> x ;
		sum += x;
		A[j]=x;
		if (x > Max) Max = x;
	}
	if (Max > (sum/k + 1) ) p = Max ; 
	else {
		if (sum%k == 0) p = sum/k ;
		else p = sum/k +1 ;
	}
	
	while(1){
		if( pack(A, n, k, p) ) {
			cout << p <<endl ;
			break ;
		}
		else p++;
	}
	
	return 0;
}