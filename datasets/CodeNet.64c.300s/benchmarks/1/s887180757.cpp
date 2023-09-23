//#define LOCAL
#include<iostream>
#include<cstdio>
#include<algorithm>
const int maxn = 100000;
using namespace std;

int Partition(int *A,int p,int r)
{
	int i = p - 1;
	int x = A[r];
	for(int j = p;j < r;j++){
		if(A[j] <= x){
			i++;
			swap(A[i],A[j]);
		}
	}
	//A[i+1] = x;
	swap(A[i+1],A[r]);
	return i+1;
}
int main()
{
	//#ifdef LOCAL
	//freopen("partition.txt","r",stdin);
	//#endif
	int num;
	int A[maxn];
	cin >> num;
	for(int i = 0;i < num;i++){
		scanf("%d",&A[i]);
	}
	int part = Partition(A,0,num - 1);
	for(int i = 0;i < num;i++){
		if(i > 0){
			printf(" ");
		}
		if(i == part){
			printf("[%d]",A[i]);
			continue;
		}
		printf("%d",A[i]);
	}
	printf("\n");
	return 0;
 } 
