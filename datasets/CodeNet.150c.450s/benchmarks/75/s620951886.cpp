//By Vlgd
#include<bits/stdc++.h>
using namespace std;
int H[500005],h;
void heapify(int i){
	int l=2*i,r=2*i+1,large;
	if (l<=h&&H[l]>H[i]) large=l;
	else large=i;
	if (r<=h&&H[r]>H[large]) large=r;
	if (large!=i){
		swap(H[i],H[large]);
		heapify(large);
	}
}
int main(){
	scanf("%d",&h);
	for (int i=1;i<=h;i++) scanf("%d",&H[i]);
	for (int i=h/2;i>=1;i--) heapify(i);
	for (int i=1;i<=h;i++) printf(" %d",H[i]);
	printf("\n");
}
