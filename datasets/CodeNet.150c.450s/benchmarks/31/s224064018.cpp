//last edited at 26.8.2015 by charis

#include<iostream>
using namespace std;

int main(){
	int N;
	cin >> N;
	int A[N];
	for(int i=0; i<N; i++){
		cin >> A[i];
	}
	
	int maxv=A[1]-A[0];
	int min=A[0];
	for(int i=1; i<N; i++){
		maxv=(maxv>A[i]-min)?maxv:A[i]-min;
		min=(A[i]<min)?A[i]:min;
	}
	cout << maxv << endl;
	return 0;
}