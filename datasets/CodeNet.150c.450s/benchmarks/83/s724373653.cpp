#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;

struct item{
	int v;
	int w;
};

int knapsack(int N, int W, vector<struct item> items){
	int C[101][10001];
	for(int i=0;i<=W;i++)
		C[0][i] = 0;
	
	for(int i=1;i<=N;i++)
		C[i][0] = 0;
	
	for(int i=1;i<=N;i++){
		for(int j=1;j<=W;j++){
			if(items[i-1].w <= j)
				C[i][j] = max(C[i-1][j], items[i-1].v + C[i-1][j - items[i-1].w]);
			else
				C[i][j] = C[i-1][j];
		}
	}

	return C[N][W];
}

int main(){
	int N, W, num1, num2;
	vector<struct item> items;
	

	cin>>N>>W;
	for(int i=0;i<N;i++){
		cin>>num1>>num2;
		struct item temp = {num1, num2};
		items.push_back(temp);
	}	
	
	cout<<knapsack(N, W, items)<<endl;
	return 0;
}