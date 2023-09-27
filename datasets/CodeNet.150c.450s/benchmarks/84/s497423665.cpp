#include<bits/stdc++.h>
using namespace std;

#define MAX 200000
#define INF (1<<30)

int L[MAX],R[MAX];

long long Merge(int* A, int l, int mid, int r){
	int n1=mid-l, n2=r-mid;
	long long cnt=0;

	for(int i=0; i<n1; i++){
		// A [l<->mid) をLに格納
		L[i]=A[l+i];
	}
	for(int i=0;i<n2;i++){
		// A [mid<->r) をRに格納
		R[i]=A[mid+i];
	}

	L[n1]=INF;	R[n2]=INF;

	int i=0,j=0;
	for(int k=l; k<r; k++){
		if(L[i]<=R[j]){
			A[k]=L[i++];
		}else{
			cnt+=n1-i;
			/*
				Lの方の配列に残ってる個数が(n1-i)個。
				Rから要素を1個取り出す(これをxとする)たびに、その時Lに残ってる要素は
				xにとっての反転数。
			*/
			A[k]=R[j++];
		}
	}

	return cnt;
}
long long MergeSort(int* A, int l, int r){
	int cnt=0;
	long long v1=0,v2=0,v3=0;
	if(r-l>1){
		int mid=(l+r)/2;
		v1+=MergeSort(A, l, mid);
		v2+=MergeSort(A, mid, r);
		v3+=Merge(A, l, mid, r);
	}

	return v1+v2+v3;

}


int main(){
	int A[MAX];
	int n;	cin>>n;
	for(int i=0;i<n;i++)cin>>A[i];

	long long ans=MergeSort(A, 0, n);

	//for(int i=0;i<n;i++){
	//	if(i)cout<<" ";
	//	cout<<A[i];
	//}cout<<endl;
	cout<<ans<<endl;

	return 0;
}

