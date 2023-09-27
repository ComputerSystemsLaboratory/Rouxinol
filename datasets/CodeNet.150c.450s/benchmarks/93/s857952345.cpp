#include<bits/stdc++.h>
using namespace std;
string s,s1,s2;
int t,n,m,tmp,cnt=0,p,pp;
int a[2][500001];
char c[2][100001];
int cut(int p,int r){
	int i=p-1,j,tmp,x; char ch;
	tmp=a[1][r];
    for (j=p; j<r; j++){
    	if (a[1][j]<=tmp){
    		i++;
    		x=a[1][j]; a[1][j]=a[1][i]; a[1][i]=x; 
			ch=c[1][i]; c[1][i]=c[1][j]; c[1][j]=ch;
		}
	}
	x=a[1][i+1]; a[1][i+1]=a[1][r]; a[1][r]=x; 
	ch=c[1][i+1]; c[1][i+1]=c[1][r]; c[1][r]=ch;
	return i+1;
}
void qsort(int l,int r){
	 int q;
	 if (l<r){
	 	q=cut(l,r);
	 	qsort(l,q-1);
	 	qsort(q+1,r);
	 }
}
int x[500001],y[500001];
char xx[500001],yy[500001];
void merge_sort(int l,int r){
	 int mid,n1,n2;
	 if (r-l==1) return;
	 mid=(l+r)/2; 
	 merge_sort(l,mid);
	 merge_sort(mid,r);
	 n1=mid-l; n2=r-mid;
	 for (int i=0; i<n1; i++){
	 	x[i]=a[0][l+i];
	 	xx[i]=c[0][l+i];
	 }
	 for (int i=0; i<n2; i++){
	  	 y[i]=a[0][mid+i];
	  	 yy[i]=c[0][mid+i];
	 }
	 x[n1]=2000000001; y[n2]=2000000001;
	 int i=0,j=0;
	 for (int k=l; k<r; k++){
	 	 if (x[i]<=y[j]){
	 	 	a[0][k]=x[i];
	 	 	c[0][k]=xx[i];
	 	 	i++;
		  }
	 	 else{
	 	 	a[0][k]=y[j];
	 	 	c[0][k]=yy[j];
	 	 	j++;
		  }
	 	  cnt++;
	 }
   
}
int main(){
	bool ok=true;
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i=0; i<n; i++){
    	 cin>>c[0][i]>>a[0][i];
    	 c[1][i]=c[0][i];
    	 a[1][i]=a[0][i];
	}
    merge_sort(0,n);
    qsort(0,n-1);
    for (int i=0; i<n; i++){
    	if (c[0][i]!=c[1][i]){
    		ok=false; break;
		}
	} 
	if (ok)
	   cout<<"Stable"<<endl;
	else
	   cout<<"Not stable"<<endl;
	for (int i=0; i<n; i++){
		cout<<c[1][i]<<' '<<a[1][i]<<endl;
	}
	return 0;
} 
