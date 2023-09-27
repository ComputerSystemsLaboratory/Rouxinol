#include <iostream>
using namespace std;

#define SWAP(type,a,b){type t=a;a=b;b=t;}

int main() {
	int N;
	int count=0;
	cin>>N;
	int A[N];
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	
	for(int i=0;i<N;i++){
		int mini=i;
		for(int j=i;j<N;j++){
			if(A[j]<A[mini]){
				mini=j;
			}
		}
		if(i!=mini){
			SWAP(int,A[i],A[mini]);
			count++;	
		}
	}
	cout<<A[0];
	for(int i=1;i<N;i++){
	cout<<" "<<A[i];
	}
	cout<<"\n"<<count<<endl;
	return 0;
}