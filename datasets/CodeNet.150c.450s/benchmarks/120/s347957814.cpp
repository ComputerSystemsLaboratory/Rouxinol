#include<iostream>
#include<cstdio>
#include<queue>
#include<string>
#include<limits.h> 
#include<bitset> 
using namespace std;
int r,c;
bitset<10000>	arr[50];
//int arr[10][10000];
int res;
void dfs(int row){
	if(row==r){
		int num=0;
		int temp;
		for(int j=0;j<c;j++){
			temp=0;
			for(int i=0;i<r;i++){
					temp+=arr[i][j];
			}
			//取1表示该列不翻转，取0表示该列翻转 
			num=num+max(temp,r-temp);
		}
		res=max(res,num);
		return;
	}
	//翻转 
	arr[row].flip();
	dfs(row+1);
	//不反转 
	arr[row].flip();
	dfs(row+1);
}
int main(){
	while(scanf("%d%d",&r,&c)!=EOF){
		if(r==0&&c==0){
			break;
		}
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				int x;
				scanf("%d",&x);
				arr[i].set(j,x);
			}
		}
		res=-1;
		dfs(0);
		printf("%d\n",res);
	}
	return 0;
} 
