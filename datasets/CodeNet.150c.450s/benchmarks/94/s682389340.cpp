/*last edited at 27.8.2015 by charis
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_2_A
*/

#include<iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int A[N];
	for(int i=0; i<N; i++){
		cin >> A[i];
	}
	int c=0;
	for(int i=0; i<N; i++){
		for(int j=N-1; j>=i; j--){
			if(A[j]<A[j-1]) {
				int t=A[j-1]; A[j-1]=A[j]; A[j]=t; c++;
			}
		}
	}
	
	for(int i=0; i<N-1; i++){
		cout << A[i] << " ";
	}	
	cout << A[N-1] << endl;
	cout << c << endl;
	
	return 0;
}