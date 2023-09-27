#include <stdio.h>
int djs[10010];
int height[10010];
int djsUnion(int x,int y){
	if(height[x]>height[y]){
		djs[y]=x;
	}
	else if(height[x]<height[y]){
		djs[x]=y;
	}
	else{
		djs[x]=y;
		height[y]++;
	}
	return 0;
}
int find (int x){
	if(djs[x]==-1)return x;
	else{
		djs[x]=find(djs[x]);
		return djs[x];
	}
}
int main(){
	int i,n,m,x,y,z;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		djs[i]=-1;
		height[i]=1;
	}
	for(i=0;i<m;i++){
		scanf("%d %d %d",&x,&y,&z);
		if(x==1){
			if(find(y)==find(z)){
				printf("1\n");
			}
			else{
				printf("0\n");
			}
		}
		else{
			if(find(y)!=find(z)){
				djsUnion(find(y),find(z));
			}
		}	
	}
	return 0;
}