#include <stdio.h>

int main(){
	int i,pa,pb,tpa,tpb,count;
	while(1){
		tpa = 0;
		tpb = 0;
		scanf("%d",&count);
		if (count == 0) break;
		for(i=0;i<count;i++){
			scanf("%d %d",&pa,&pb);
			if(pa == pb) {
				tpa += pa;
				tpb += pb;
			}
			else if(pa > pb) tpa += (pa+pb);
			else tpb += (pa+pb);
		}
		printf("%d %d\n",tpa,tpb);
	}
	return 0;
}