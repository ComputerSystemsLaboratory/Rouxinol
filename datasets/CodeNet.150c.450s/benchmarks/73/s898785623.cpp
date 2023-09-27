#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#define N 131072 //100000
#define MAXVAL ((long int) ((unsigned long) (1 << 31) - 1))  //*2
int min(int a, int b){return a>b?b:a;}
int data[2*131072+100];      //the size of array, for present the tree

//easy version of update 
//from bottom to top
void update(int index, int left_child, int right_child){
	if(index<0) return;
	data[index] = data[left_child]+data[right_child];
	//even : right, odd: left 
	if(index%2==1){//left
		update(index/2,index, index+1);
	}else if(index%2==0){
		update(index/2-1,index-1,index);
	}
	
}
//segment of thr last layer
//use 0-7 as segemnt and 1-4 as query segment
int search(int search_left,int search_right, int current_node, int node_left, int node_right){
	if(search_right < node_left || search_left > node_right){
        return 0;//not in the range
	}
	else if(search_left <= node_left && search_right >= node_right){
		return data[current_node];//for the folded node which parent present the minimal of their children 
	}else {
		int left = search(search_left, search_right,current_node*2+1, node_left,(node_left+node_right)/2);
		int right = search(search_left, search_right,current_node*2+2, (node_left+node_right)/2+1, node_right);
		return (left+right);
	}
	
}
int main(){
	int n, q;
	FILE *fp = fopen("in.txt","r");
	scanf("%d %d",&n,&q);
	int N = 1;
	while(N<n) N = N<<1;
	if(n==1) N=2;
	for(int i = 0; i<=2*N-2; i++){
		data[i] = 0;
	}
	for(int i = 0; i<q; i++){
		int temp = 0;
		scanf("%d", &temp);
		int a,b,c;
		scanf("%d %d",&a,&b);
		a=a-1;
		if(temp == 0) {  //add
			data[N-1+a] += b;
			if((N-1+a)%2==1) {//left
				update((N-1+a)/2,N-1+a,N+a);
			} else {
				update((N-1+a)/2-1,N-2+a,N-1+a);
			}
			//test print
			/*for(int i = 0 ;i<=2*N-2; i++){
				printf("%d ",data[i]);
			}printf("\n");*/
		} else if(temp == 1){ //search
			b = b-1;
			printf("%d\n",search(a,b,0,0,N-1));
		}
	}
	
	return 0;
}