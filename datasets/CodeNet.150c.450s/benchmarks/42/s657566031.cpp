#include<stdio.h>

struct Queue{
	char s[15];
	int time;
};
Queue name[1000000];
int main(){
	int i,n,j,k,q;
	
	scanf("%d",&n);
	scanf("%d",&q);
	getchar();
	int cur=0;
	for(i=0;i<n;i++){
		scanf("%s",name[i].s);
		scanf("%d",&name[i].time);
		getchar();
	}
	for(i=0;i<n;i++){
		if(name[i].time>q){
			name[i].time-=q;
			cur+=q;
			name[n]=name[i];
			n++;
		}
		else{
			cur+=name[i].time;
			printf("%s %d\n",name[i].s,cur);
		}
	}
} 
