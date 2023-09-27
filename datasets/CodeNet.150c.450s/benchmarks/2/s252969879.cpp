#include <iostream>
#include <array>
#include <iomanip>
#include <algorithm> //using for swap()
using namespace std;

array<int,100001> A;

void Partition(int p,int  r){
	int x = A[r];
	int i = p-1;
	for(int j=p;j<r;j++){
		if(A[j] <= x){
	       	i++;
		    swap(A[i],A[j]);
		}
	
/*
	    for(int p=0;p<r;p++){
	    	cout<<setw(2)<<A.at(p)<<" ";
	    }
	    cout<<setw(2)<<A.at(r)<<endl;
*/		
	}
    swap(A[i+1],A[r]);

    for(int p=0;p<r;p++){
    	if(p==i+1){
    		cout<<"["<<A.at(p)<<"] ";
    	}else{
    		cout<<A.at(p)<<" ";
    	}
    }
    cout<<A.at(r)<<endl;
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		A[i]=tmp;
	}
	Partition( 0, n-1);
	
	return 0;
}