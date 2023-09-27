#include <iostream>
using namespace std;
int  partition(int A[],int n,int p,int r){

	int i=p-1;
	int x=A[r];
	for(int j=p;j<r;j++){
		if(A[j]<=x){
			++i;
			int t=A[j];
			A[j]=A[i];
			A[i]=t;
		}
	}
	A[r]=A[i+1];
	A[i+1]=x;

	return i+1;
}
int main(){
	int n;
	cin>>n;
	int *A=new int[n];
	for(int i=0;i<n;i++)cin>>A[i];

    int q=partition(A,n,0,n-1);
 
    for(int i=0;i<n;i++){
    	if(i>0)cout<<' ';
    	if(i==q)cout<<"[";
    	cout<<A[i];
        if(i==q)cout<<"]";
    }
    cout<<endl;

    return 0;
}
