#include<stdio.h>

//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_D
//increasr the P to satisfy the requirement of the question
/*
5 3
8
1
7
3
9
*/

//deal with case: count>=1 , may be divvided into many subset which smaller than tracks
//TLE O(n^2)
//O(nlgn) 
int main(){
	int p = 0;// the max common load
	int n, track,max=0,total = 0;
	
	scanf("%d %d",&n,&track);
	int in[n+1];
	int count = track;
	for(int i = 0; i<n; i++){
		scanf("%d",&in[i]);
		if(in[i]>max) max = in[i];
		total += in[i];
	}
	//binary search	
	int left = 0;
	int right = total;
	int flag = 0;
	while(left+1<right){
		int i = (left+right)/2;
		//printf("%d %d %d\n",left,i,right);
		p = i;
		int k;
		count = track;
		//printf("i: %d\n",i);
		for(k = 0; k<n; k++){
			if(i<in[k]){
				count = 0; break;
			}
			if(p>=in[k]){
				//printf("in same subset\n");
				p = p - in[k]; 
			}else if(p<in[k]){
				//printf("new subset\n");
				count--;
				p = i-in[k];
			}
			//printf("%d %d %d %d\n",p, count,in[k],k);
			//if(count==1) break;// the first ele in the last subset
		}
		//printf("%d %d",k, count);
		//printf("count: %d\n",count);
		 if(count<1){  // deal with case
			left = i;
		 }
		 else {
		 	right = i;
		 }
		 p = right;
	}
	
	/*for(int i = max; i<=total; i++){
		//satisfy
		p = i;
		int k;
		count = track;
		//printf("i: %d\n",i);
		for(k = 0; k<n; k++){
			if(p>=in[k]){
				//printf("in same subset\n");
				p = p - in[k]; 
			}else if(p<in[k]){
				//printf("new subset\n");
				count--;
				p = i-in[k];
			}
			//printf("%d %d %d %d\n",p, count,in[k],k);
			//if(count==1) break;// the first ele in the last subset
		}
		//printf("%d %d",k, count);
		 if(count>=1){  // deal with case
			p = i; break;
		 }
	}*/
	if(track==1) printf("%d\n",total); 
	else printf("%d\n",p);
	
	return 0;
}
