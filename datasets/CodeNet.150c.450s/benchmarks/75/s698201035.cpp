#include <iostream>

using namespace std;

#define MAX 5000001

int A[MAX], H;

void maxfi(int x){
	int large,left, right;
	large = x;
	left = 2*x;
	right = 2*x+1;

	if(left<=H && A[large]<A[left]) large = left;
	if(right<=H && A[large]<A[right]) large = right;


	if(large!=x){
		swap(A[x], A[large]);
		maxfi(large);
	}
}

int main(){
	cin>>H;
	for(int i=1; i<=H; i++){
		cin>>A[i];
	}

	for(int j=H/2; j>=1; j--){
		maxfi(j);
	}

	for(int i=1; i<=H; i++){
		cout<<" "<<A[i];
	}
	cout<<endl;
	return 0;
}
