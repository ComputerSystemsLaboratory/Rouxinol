#include <stdio.h>
#include <algorithm>

using namespace std;

void print(char str[],int a,int b){
	for(int i = a; i <= b; i++)	printf("%c",str[i]);
	printf("\n");
}

void replace(char str[],char p[],int a,int b){
	int p_length = b-a+1;
	for(int i = 0; i < p_length;i++) str[a+i] = p[i];
}

void reverse(char str[],int a,int b){
	int left = a,right = b;
	while(left < right){
		swap(str[left++],str[right--]);
	}
}

int main(){
	char str[1001],p[1001],order[8];
	int q,a,b;
	scanf("%s",str);
	scanf("%d",&q);
	for(int i = 0; i < q; i++){
		scanf("%s %d %d",order,&a,&b);
		switch(order[2]){
		case 'i':
			print(str,a,b);
			break;
		case 'v':
			reverse(str,a,b);
			break;
		case 'p':
			scanf("%s",p);
			replace(str,p,a,b);
			break;
		}
	}
}