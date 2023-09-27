#include <iostream>
#include <cstdio>
#include <string>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

int  P(int* A,int p,int r);

int main()
{
    int* a;
	int N,num;
    cin>>N;
	a=new int[N];
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	num=P(a,0,N-1);
    for(int i=0;i<N;i++){
        if(i){
            cout<<' ';
        }
        if(i==num){
            cout<<'['<<a[i]<<']';
        }else{
            cout<<a[i];
        }
    }
    cout<<endl;
}
int  P(int* A,int p,int r)
{
	int x=A[r];
	int i=p-1;
	for(int j=p;j<r;j++){
		if(A[j] <= x){
            i++;
			swap(A[i],A[j]);
		}
	}
	swap(A[i+1],A[r]);
	return i+1;
}