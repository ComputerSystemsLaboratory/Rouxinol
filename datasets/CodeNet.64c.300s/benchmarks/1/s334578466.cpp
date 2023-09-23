#include<iostream>
#include<utility>
using namespace std;
int partition(int*,int,int);

int main(){
	int n;
	int A[100001];
	cin >> n;
	for(int i=0;i<n;i++) cin >> A[i];
	int res = partition(A,0,n-1);
	for (int i = 0; i < n; ++i)
	{
		if(i == res) cout << "[" << A[i] << "] ";
		else if (i == n-1) cout << A[i] << endl;
		else cout << A[i] << " ";
	}
	return 0;

}

int partition(int A[],int p,int r){
	int x = A[r];
	int i = p-1;
	for(int j = p;j<=r;j++){
		if(A[j] > x){

		}else{
			i++;
			swap(A[i],A[j]);
		}
	}
	return i;
}