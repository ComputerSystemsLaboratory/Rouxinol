#include<stdio.h>
int main(void){
	int turn,i,myten=0,yourten=0,t,ch=0;
	char my[101],your[101];
	scanf("%d",&turn);
	for(i=0;i<turn;i++){
		scanf("%100s %100s",my,your);
		for(t=0;ch==0;t++){
		if(my[t]>your[t]){
			myten+=3;
			ch++;
		}else if(my[t]<your[t]){
			yourten+=3;
			ch++;
		}else if(my[t]=='\0'&&your[t]=='\0'){
			myten+=1;
			yourten+=1;
			ch++;
		}
		}
		
	ch=0;
}
	printf("%d %d\n",myten,yourten);
	return 0;
}