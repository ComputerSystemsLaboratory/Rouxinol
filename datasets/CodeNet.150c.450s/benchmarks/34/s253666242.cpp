#include<iostream>
using namespace std;

int main()
{
	int A[30]; //i???????????§????????????
	int N;
	
	A[0]=1;
	A[1]=1;
	A[2]=2;
	A[3]=4;

	int i;
	for(i=4;i<31;++i){
		A[i]=A[i-1]+A[i-2]+A[i-3];
	}

	while(cin>>N && N){
		cout<<((A[N]+9)/10+364)/365<<endl;
	}

	return 0;
}