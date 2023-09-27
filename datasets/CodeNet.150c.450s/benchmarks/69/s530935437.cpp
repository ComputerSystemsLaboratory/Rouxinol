#include<cstdio>

using namespace std;

int ball[10];

bool dfs(int i,int b,int c){
	if(i==10)return true;
	if(ball[i]>b && dfs(i+1,ball[i],c))return true;
	if(ball[i]>c && dfs(i+1,b,ball[i]))return true;
	return false;
}

int main(){
	int lines;
	scanf("%d",&lines);
	for(int i = 0;i<lines;i++){
		for(int j=0;j<10;j++)scanf("%d",&ball[j]);
		if(dfs(0,0,0)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}