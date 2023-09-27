#include <iostream>
using namespace std;

const int NOT_FOUND=-1;

int linerSearch(int key, int A[],int n){
	int i=0;
	A[n]=key;
	while(A[i]!=key)
		i++;

	if(i==n)
		return NOT_FOUND;
	else
		return i;

}

int main(){
	int n,q;

	cin >>n;
	int S[n+1];
	for(int i=0; i<n; i++)
		cin>>S[i];

	cin >>q;
	int T[q+1];
	for(int i=0; i<q; i++)
		cin>>T[i];

	int C=0;
	for(int i=0; i<q; i++){
		if(linerSearch(T[i], S,n)!=NOT_FOUND)
			C++;
	}

	cout<<C<<endl;

	return 0;
}

		