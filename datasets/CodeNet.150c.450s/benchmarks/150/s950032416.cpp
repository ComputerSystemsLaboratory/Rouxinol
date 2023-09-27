#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int A[2000010];
int C[100010];

int main (){
	int n;
	cin>>n;
	for(int i=0;i<100000;i++) C[i]=0;
	for(int i=0;i<n;i++) {
		cin>>A[i];
		C[A[i]]++;
	}
	int flag=0;
	for(int i=0;i<100000;i++){
		for(int j=C[i];j>0;j--) if(flag) {
			cout<<" "<<i;
			flag++;
		}
		else {cout<<i;flag++;}
	}
	cout<<endl;
	return 0;
}
