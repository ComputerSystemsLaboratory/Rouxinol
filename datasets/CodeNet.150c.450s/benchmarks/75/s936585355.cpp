/*最大最小堆
https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/9/ALDS1_9_B
10
4 1 3 2 16 9 10 14 8 7
*/
#include<iostream>
using namespace std;
const int N=500001;
int a[N]; 
int h;
int left(int root){
	return root*2;
}
int right(int root){
	return root*2+1;
}
void maxHeapify(int *a,int root){
	int l=left(root);
	int r=right(root);
	int largest=root;
	if(l<=h&&a[l]>a[root])
		largest=l;
	if(r<=h&&a[r]>a[largest])
		largest=r;	
	if(largest!=root){
		swap(a[root],a[largest]);
		//printf("swap(%d,%d)\n",a[root],a[largest]) ;
		maxHeapify(a,largest);
	}	
}
void buildMaxHeap(int *a){
	for(int i=h/2;i>=1;i--)
		maxHeapify(a,i);
}
void solve(){
	buildMaxHeap(a);
	for(int i=1;i<=h;i++)
		printf(" %d",a[i]);
		printf("\n");
}
int main(){
while(~scanf("%d",&h)){
	for(int i=1;i<=h;i++)
		scanf("%d",&a[i]);
	solve();	
}		
	return 0;
}

