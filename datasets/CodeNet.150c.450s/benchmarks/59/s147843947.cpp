#define	_USE_MATH_DEFINES
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <map>
#include <queue>
#include <stack>
#include <list>
#include <string>
#include <set>
using namespace std;
void insertionSort(int A[],int n){
	cout<<A[0];
		for(int j=1;j<n;j++)
			cout<<" "<<A[j];
		cout<<endl;
	for(int i=1;i<n;i++){
		int v=A[i];
		int j=i-1;
		while(j>=0&&A[j]>v){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=v;
		cout<<A[0];
		for(int j=1;j<n;j++)
			cout<<" "<<A[j];
		cout<<endl;
		
	}
}
int main(){
	
	int A[101]={0};
	int n;
	
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i];
	
	insertionSort(A,n);
	
	
	
}