#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
typedef long long int ll;
int N;
vector<int>X;
int main()
{
	scanf("%d",&N);
	int M=N;
	for(int i=2;i*i<=M;i++){
		while(true){
		
		if(N%i==0){
			
			X.push_back(i);
			N/=i;
		}
		else break;
		}
	}
	if(N!=1)X.push_back(N);
	printf("%d:",M);
	for(int i=0;i<X.size();i++){
		printf(" %d",X[i]);
	}
	printf("\n");
	return 0;
}