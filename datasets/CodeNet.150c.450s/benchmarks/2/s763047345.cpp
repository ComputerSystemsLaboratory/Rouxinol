#include<iostream>
#define MAX 100000
using namespace std;
int Partition(int A[],int p,int r);

int main()
{
	int n,i,j,q;
	int A[MAX];

	cin >> n;
	for(i=0;i<n;i++){
		cin >> A[i];
	}

	//q = Partition(A,A[0],A[n-1]);
	q = Partition(A,0,n-1);

	for(i=0;i<q;i++){
		cout << A[i] << ' ' ;
	}

	cout << '[' << A[i] << "] " ;
	i++;

	for(;i<n-1;i++){
		cout << A[i] << ' ';
	}

	cout << A[i] << endl ;

	return 0;
}

int Partition(int A[],int p,int r){
	int x,i,j,tmp;
	
	x = A[r];
	i = p-1;

	for(j=p;j<r;j++){
		if(A[j]<=x){
			i = i+1;
            tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	
	tmp = A[i+1];
	A[i+1] = A[r];
	A[r] = tmp;
	
	return i+1;
}