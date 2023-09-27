#include <stdio.h>

using namespace std;


int main(){
	int n,count=0,t,min,min_index,tmp,left_node,right_node,dist;
	scanf("%d",&n);
	int distance[n][n],P[n];

	for(int i=0;i<n;i++){
		for(int k=0;k<n;k++)distance[i][k]=10000001;
		P[i]=0;
	}
	distance[0][0] = 0;
	P[0]=1;

	for(int i=0;i<n;i++){
		scanf("%d %d",&left_node,&tmp);
		for(int k=0;k<tmp;k++){
			scanf("%d %d",&right_node,&dist);
			distance[left_node][right_node] = dist;
		}
	}

	while(count<n-1){

		min=10000001;
		for(int i=1;i<n;i++){
			if(P[i]==0&&distance[0][i]<min){
				min_index = i;
				min = distance[0][i];
			}
		}
		t = min_index;
		P[t]=1;
		count++;

		for(int i=0;i<n;i++){
			if(distance[0][i] > distance[0][t]+distance[t][i]){
				distance[0][i]=distance[0][t]+distance[t][i];
			}
		}
	}

	for(int i=0;i<n;i++){
		printf("%d %d\n",i,distance[0][i]);
	}

    return 0;
}