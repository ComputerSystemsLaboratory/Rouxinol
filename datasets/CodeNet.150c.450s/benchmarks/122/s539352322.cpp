/*优先队列
https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/9/ALDS1_9_C
insert 8
insert 2
extract
insert 10
extract
insert 11
extract
extract
end
*/
#include<iostream>
#include<cstring> 
using namespace std;
const int N=2000001;
const int INF=0x3f3f3f;
int a[N];
int h;
string opr; 
int key;
void maxHeapify(int *a,int root){
	int l=root*2;
	int r=root*2+1;
	int largest=root;
	if(l<=h&&a[l]>a[root])
		largest=l;
	if(r<=h&&a[r]>a[largest])
		largest=r;	
	if(largest!=root){
		swap(a[root],a[largest]);
		maxHeapify(a,largest);
	}	
}
void heapIncreaseKey(int *a,int i,int key){
	if(key<a[i])
		printf("error:new key < current key!\n");
	a[i]=key;
	while(i>1&&a[i/2]<a[i]){
		swap(a[i/2],a[i]);
		i/=2;
	}	
}
void insert(int key){
	h++;
	a[h]=-INF;
	heapIncreaseKey(a,h,key); 
}
int heapExtractMax(int *a){
	if(h<1)
		printf("error:the heap is empty!\n");
	int max=a[1];
	a[1]=a[h];
	h--;
	maxHeapify(a,1);
	return max;	
}
int main(){
	h=0;
while(cin>>opr){
	if(opr.compare("insert")==0){
		scanf("%d",&key);
		insert(key);
	}else if(opr.compare("extract")==0){
		printf("%d\n",heapExtractMax(a));
	}else if(opr.compare("end")==0){
		break;
	}
}	
	return 0;
} 
