#include <iostream>
#include <array>
#include <string>
	
using namespace std;

int n;
array<short,2000001> A;
array<short,2000001> B;
array<int,10001> C;

void CountingSort(int k){
	
    for(int j=0;j<n;j++){
        C[A[j]]++;
    }
    for(int i=1;i<=k;i++){
	    C[i] = C[i] + C[i-1];
	}
    for(int j=n-1;j>=0;j--){
       B[C[A[j]]-1] = A[j];
       C[A[j]]--;
    }    
    for(int i=0;i<n-1;i++) cout<<B.at(i)<<" ";
    cout<<B.at(n-1)<<endl;
}


int main(){
	int k=-1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>A[i];
		if(k<A[i]) k=A[i];
	}
	CountingSort(k);
	return 0;
}