#include<stdio.h>
struct Card {
	char pattern;
	int number;
	int unc;
};
int partition(struct Card cards[],int n, int p, int r){
	int i,j;
	Card t;
	i=p-1;
	for(j=p;j<r;j++){
		if(cards[j].number<=cards[r].number){
			i++;
			t=cards[i];
			cards[i]=cards[j];
			cards[j]=t;
		}	
	}
	t=cards[i+1];
	cards[i+1]=cards[r];
	cards[r]=t;
	return i+1;
}

void QuickSort(struct Card cards[],int n, int p, int r){
	int q;
	if(p<r){
		q=partition(cards,n,p,r);
		QuickSort(cards,n,p,q-1);
		QuickSort(cards,n,q+1,r);
	}
}

int main(){
	int antei=0;
	int n;
	scanf("%d",&n);
	Card cards[n];
	for(int i=0;i<n;i++){
		scanf("%s %d",&cards[i].pattern,&cards[i].number);
		cards[i].unc=i;
	}	
	QuickSort(cards,n,0,n-1);
	for(int i=0;i<n;i++){
		if(cards[i].number==cards[i+1].number){
			if(cards[i].unc>cards[i+1].unc){
				antei=1;
			}
		}
	}
	if(antei==0){printf("Stable\n");}
	else{printf("Not stable\n");}
	for(int k=0;k<n;k++){
		printf("%s %d\n",&cards[k].pattern,cards[k].number);
	}
	return 0;
}
