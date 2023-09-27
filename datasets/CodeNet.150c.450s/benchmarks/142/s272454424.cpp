#include<iostream>
using namespace std;
int score[200000];//={0};
int main(){
	int N,K;
  	scanf("%d %d",&N,&K);
  	for(int i=0;i<N;i++){
    	scanf("%d",&score[i]);
    }
  	for(int i=0;i<N-K;i++){
    	printf(score[i+K]>score[i]?"Yes\n":"No\n");
    }
	return 0;
}