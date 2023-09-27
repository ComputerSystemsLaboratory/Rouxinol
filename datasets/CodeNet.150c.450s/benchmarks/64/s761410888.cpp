#include<iostream>
#include<cstdlib>

using namespace std;

bool solve(int i,int m,int n,int A[]);

int main(){
	int n,q;
	int *A,*m;

	cin>>n;
	A = new int[n];
	for(int i=0;i<n;i++) cin>>A[i];

	cin>>q;
	m = new int[q];
	for(int i=0;i<q;i++){
		cin>>m[i];
		if(solve(0,m[i],n,A)){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}

	delete [] A; delete [] m;

	cin.get();
	cin.get();
}

bool solve(int i,int m,int n,int A[]){
	if(m==0) return true;
	if(m<0 || i>=n) return false;
	bool res = solve(i+1,m,n,A) || solve(i+1,m-A[i],n,A);
	return res;
}