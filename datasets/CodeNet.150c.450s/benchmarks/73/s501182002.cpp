#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <cfloat>
#include <stack>
#include <queue>
#include <vector>
typedef long long int ll;
#define BIG_NUM 2000000000
#define MOD 1000000007
#define EPS 0.000001
using namespace std;

int N;
int* table;

void init(int first_N){
	while(N < first_N)N *= 2;
}

void add(int loc,int value){
	loc += N-1;

	table[loc] += value;

	if(N == 1)return;

	int parent = (loc-1)/2;

	while(true){
		table[parent] =  table[2*parent+1]+table[2*parent+2];

		if(parent == 0)break;
		else{
			parent = (parent-1)/2;
		}
	}
}


int getSUM(int search_left,int search_right,int node_id,int node_left,int node_right){

	if(search_right < node_left || search_left > node_right)return 0;

	if(search_left <= node_left && search_right >= node_right){
		return table[node_id];
	}

	int left_sum = getSUM(search_left,search_right,2*node_id+1,node_left,(node_left+node_right)/2);
	int right_sum = getSUM(search_left,search_right,2*node_id+2,(node_left+node_right)/2+1,node_right);

	return left_sum+right_sum;
}


int main(){

	int first_N,Q,command,left,right;
	table = new int[263000];
	N = 1;

	scanf("%d %d",&first_N,&Q);

	init(first_N);

	for(int i = 0; i <= 2*N-2; i++)table[i] = 0;

	for(int i = 0; i < Q; i++){
		scanf("%d %d %d",&command,&left,&right);

		if(command == 0){
			left--;
			add(left,right);
		}else{
			left--;
			right--;
			printf("%d\n",getSUM(left,right,0,0,N-1));
		}
	}

	return 0;
}