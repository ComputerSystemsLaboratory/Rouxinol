#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int A[128];

int main(){
	A[0]=1;
	for(int i=1; i<=32; i++){
		A[i]=A[i-1];
		if(i>1)A[i]+=A[i-2];
		if(i>2)A[i]+=A[i-3];
	}
	int n;
	while(1){
		cin>>n;
		if(n==0)break;
		cout<<((A[n]+9)/10+364)/365<<endl;
	}
}