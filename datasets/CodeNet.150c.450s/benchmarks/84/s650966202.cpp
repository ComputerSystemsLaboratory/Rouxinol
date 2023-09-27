#include<bits/stdc++.h>
using namespace std;
string s,s1,s2;
int t,n,m,tmp;
long long cnt;
int a[200001];
int x[200001],y[200001];
void merge_sort(int l,int r){
	 int mid,n1,n2;
	 if (r-l==1) return;
	 mid=(l+r)/2; 
	 merge_sort(l,mid);
	 merge_sort(mid,r);
	 n1=mid-l; n2=r-mid;
	 for (int i=0; i<n1; i++)
	     x[i]=a[l+i];
	 for (int i=0; i<n2; i++)
	     y[i]=a[mid+i];
	 x[n1]=2000000001; y[n2]=2000000001;
	 int i=0,j=0;
	 for (int k=l; k<r; k++){
	 	 if (x[i]<y[j])
	 	 	a[k]=x[i++];
	 	 else{
	 	 	a[k]=y[j++];
	 	 	cnt+=n1-i;
		  }
	 }
   
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>a[i];
    merge_sort(0,n);
    cout<<cnt<<endl;
	return 0;
} 
