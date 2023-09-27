#include <iostream>
using namespace std;
const int MAX1=11000;
int S[MAX1];
int n,q,T;

int linearsearch(int A[],int num,int key){
	int i=0;
	A[num]=key;
	while(A[i]!=key)i++;
	return i!=num;
}
int main() {
	int k,cnt;
	cnt=0;
	cin>>n;
	for(k=0;k<n;++k){
		cin>>S[k];
	}
	cin>>q;
	for(k=0;k<q;++k){
		cin>>T;
		if(linearsearch(S,n,T))cnt++;
		}

	cout<<cnt<<endl;
	return 0;
}