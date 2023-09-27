#include<cstdio>

int main(){
	int s=0,t=0;
	int tmp[4];
	
	scanf("%d %d %d %d",&tmp[0],&tmp[1],&tmp[2],&tmp[3]);
	for(int i=0;i<4;i++){
		s += tmp[i];
	}

	scanf("%d %d %d %d",&tmp[0],&tmp[1],&tmp[2],&tmp[3]);
	for(int i=0;i<4;i++){
		t += tmp[i];
	}

	if(s < t){
		printf("%d\n",t);
	}
	else{
		printf("%d\n",s);
	}
	return 0;
}