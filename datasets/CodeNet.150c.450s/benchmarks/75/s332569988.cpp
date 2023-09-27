#include <iostream>
using namespace std;
const int maxn = 5000010;
int h,a[maxn];
void maxHeapify(int i){
	int l,r,largest;
	l = 2*i;
	r = l+1;
	largest = i;
	if(l<=h&&a[l]>a[i]) 
		largest = l;
	if(r<=h&&a[r]>a[largest])
		largest = r;
	if(largest!=i){
		swap(a[i],a[largest]);
		maxHeapify(largest);
	} 
}
int main(){
	scanf("%d",&h);
	int i;
	for(i=1;i<=h;i++)
		scanf("%d",&a[i]);
	for(i=h/2;i>0;i--)
		maxHeapify(i);
	for(i=1;i<=h;i++)
		printf(" %d",a[i]);
	printf("\n");
	return 0;
}
