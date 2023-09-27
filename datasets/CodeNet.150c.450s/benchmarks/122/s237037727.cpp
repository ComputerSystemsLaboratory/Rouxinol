#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
#define MAXN 2000000

int H,A[MAXN + 1];

void keepMaxHeap(int i){
	int l = 2*i,r = l + 1,largest;
	if(l <= H && A[l] > A[i])largest = l;
	else largest = i;
	if(r <= H && A[r] > A[largest])largest = r;
	if(largest != i){
		swap(A[i],A[largest]);
		keepMaxHeap(largest);
	}
}
void insert(int key){
	H++;
	A[H] = key;
	int i = H;
	while(i > 1 && A[i/2] < A[i]){
		swap(A[i/2],A[i]);
		i = i/2;
	}
}

int extract(){
	int MaxV;
	if(H<1)return -1;
	MaxV = A[1];
	A[1] = A[H--];
	
	keepMaxHeap(1);
	
	return MaxV;
}
int main()
{
	char s[15];
	int key;
	H = 0;
	
	while(1){
		scanf("%s",s);
		if(s[0]=='e' && s[1]=='n')break;
		else if(s[0]=='i'){
			scanf("%d",&key);
			insert(key);
		}else{
			printf("%d\n",extract());
		}
	}
	return 0;
}