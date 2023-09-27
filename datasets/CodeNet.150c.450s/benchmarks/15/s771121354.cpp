#include <iostream>
using namespace std;

int linearsearch(int x,int S[],int n){
	for(int i=0;i<n;i++){
		if(S[i]==x)
			return i;
	}
	return -1;
}
	
int main(){
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}

	int m;
	cin>>m;
	int B[m];
	for(int i=0;i<m;i++){
		cin>>B[i];
	}

	int c=0;
	for(int i=0;i<m;i++){
		if(linearsearch(B[i],A,n)!=-1) c++;
	}
	cout<<c<<endl;
	return 0;
}