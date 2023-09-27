//1_2_C ??????????????????3.5
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>

struct card{
	char type;
	int num;
};

//spap??¢??°
void swap(card *a,card *b){
	card temp=*a;
	*a=*b;
	*b=temp;
	return ;
}

//???????????????????????¢??°
int printCardArray(card data[],int num){
	int i;
	for(i=0;i<num;i++){
		if(i!=0)printf(" ");
		printf("%c%d",data[i].type,data[i].num);
	}
	printf("\n");
	return 0;
}
//??????????????????
void bubble(card A[],int n){
	int i,j,k,count=0,flag=1;
	for(j=0;flag;j++){
		flag=0;
		for(i=n-1;i>=j+1;i--){
			if(A[i].num<A[i-1].num){
				swap(&A[i],&A[i-1]);	//??????
				count++;
				flag=1;
			}
			//printArray(A,n);
		}
	}
	return;
}

//???????????????
void selection(card A[],int n){
	int i,j,k,count=0;
	int min,minI;
	//?????????
	for(j=0;j<n-1;j++){
		minI=j;
		for(i=j;i<n;i++){
			if(A[i].num<A[minI].num){
				minI=i;
			}
		}
		swap(&A[j],&A[minI]);	//??????
		if(A[j].num!=A[minI].num)count++;
		//printArray(A,n);
	}
	return;
}
void checkStable(card A1[],card A2[],int n){
	for(int i=0;i<n;i++){
		if(A1[i].type!=A2[i].type){
			std::cout<<"Not stable"<<std::endl;
			return;
		}
	}
	std::cout<<"Stable"<<std::endl;
	return ;
}

int main(){
	int n;
	card A1[37];
	card A2[37];
	
	scanf("%d",&n);
	//??\???
	for(int i=0;i<n;i++){
		std::cin>>A1[i].type>>A1[i].num;
	}
	for(int i=0;i<n;i++)A2[i]=A1[i];	//?§?????????????????????????
	
	bubble(A1,n);
	selection(A2,n);
	
	printCardArray(A1,n);
	std::cout<<"Stable"<<std::endl;
	
	printCardArray(A2,n);
	checkStable(A1,A2,n);
	
	return 0;
}