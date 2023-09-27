#include<iostream>
#include<algorithm>
using namespace std;
/*
void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}*/


int partition(int A[],int p,int r){
	
	int x=A[r-1];
	int i=p-1;


	for(int j=p;j<r;j++){
		if(A[j]<=x){
			i++;
		if(i>=0&&j>=0)
		swap(A[i],A[j]);	
		}
		//swap(A[i],A[r-1]);
	}

	//swap(A[i],A[r-1]);
	return i;

}



int main(){
	int tmp[1000000];
	int n;
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>tmp[i];
	}

	int q;

	q=partition(tmp,0,n);
	
	for(int i=0;i<n;i++){
		
		if(i==q){
			cout<<"["<<tmp[i]<<"]";
		}
		
		else cout<<tmp[i];

		if(i==n-1)cout<<endl;
		else cout<<" ";
	}

	return 0;
}