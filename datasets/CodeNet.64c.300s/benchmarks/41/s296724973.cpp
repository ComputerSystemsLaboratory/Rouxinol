#include <iostream>
using namespace std;
const int maxn = 500005;
int a[maxn*4];
int H;
void maxHeapify(int i){
	int l,r,largest;
	l = 2*i;
	r = l + 1;
	if(l <= H && a[l] > a[i])largest = l;
	else largest = i;
	if(r <= H && a[r] > a[largest])largest = r;
	if(largest != i){
		swap(a[i],a[largest]);
		maxHeapify(largest);
	}
}
int main()
{
	cin>>H;
	for(int i=1;i<=H;++i)cin>>a[i];
	
	for(int i=H/2;i>=1;--i)maxHeapify(i);
	
	for(int i=1;i<=H;++i)cout<<" "<<a[i];
	cout<<endl;
	
	return 0;
}