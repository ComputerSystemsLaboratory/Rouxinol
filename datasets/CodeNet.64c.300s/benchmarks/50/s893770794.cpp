#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>
#include <string>
#include <queue>
#include <stack>
#include <sstream>
#include <cstdlib>
using namespace std;
int main(){
	int n,A[101],i,flag,j,con=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>A[i];
	}
	flag=1;
	while(flag){
		flag=0;
		for(j=n-1;j>0;j--){
			if(A[j]<A[j-1]){
				swap(A[j],A[j-1]);
				flag=1;
				con++;
			}
		}
	}
	for(i=0;i<n;i++){
		if(i==n-1)cout<<A[i]<<endl;
		else cout<<A[i]<<" ";
	}
	cout<<con<<endl;
	return 0;
}
