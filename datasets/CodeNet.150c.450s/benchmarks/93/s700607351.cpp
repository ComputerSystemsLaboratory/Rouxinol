#include<stdio.h>
int partition(int a[], int id[],char c[], int p,int r){
	int x = a[r];
	int i = p-1;
	for(int j = p; j<=r-1; j++){
		if(a[j]<=x){
			i = i+1;
			//exchange
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			temp = id[i];
			id[i] = id[j];
			id[j] = temp;
			char temp1 = c[i];
			c[i] = c[j];
			c[j] = temp1;
		}
	}
	int temp = a[i+1];
	a[i+1] = a[r];
	a[r] = temp;
	 temp = id[i+1];
	id[i+1] = id[r];
	id[r] = temp;
	char temp1 = c[i+1];
	c[i+1] = c[r];
	c[r] = temp1;
	return i+1;	
}
void quick_sort(int a[], int id[],char c[], int p,int r){
	if(p<r){
		int q = partition(a,id,c,p,r);
		quick_sort(a,id,c,p,q-1);
		quick_sort(a,id,c,q+1,r);
	}
}

void check(int id[],int a[], int n){
	for(int i = 0; i<n-1; i++){
		if(a[i]<a[i+1]) continue;//why it num check first
		if(id[i]<id[i+1]) continue;//check the equal one 
		printf("Not stable\n");
		return;
	}
	printf("Stable\n");
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	int id[n+1];
	char c[n+1];
	for(int i = 0; i<n; i++){
		scanf(" %c",&c[i]);
		scanf(" %d",&a[i]);
		id[i] = i;
		//printf("c:%c\n",c[i]);
	}
	
	quick_sort(a,id,c,0,n-1);
	check(id,a,n);
	for(int i = 0; i<n; i++){
		printf("%c %d\n",c[i],a[i]);
	}
	//printf("\n");
	
	return 0;
}
