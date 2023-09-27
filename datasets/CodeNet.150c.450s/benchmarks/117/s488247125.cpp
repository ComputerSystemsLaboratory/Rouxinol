#include<bits/stdc++.h>
using namespace std;

int n,a[500105],m;
long long inf=2e9;
void Merge( int left , int mid , int rigth ){
	int n1=mid-left, n2=rigth-mid;
	int l[n1],r[n2];
	for(int i=0 ; i<n1 ; i++){
		l[i]=a[left+i];
	}
	for(int i=0 ; i<n2 ; i++){
		r[i]=a[mid+i];
	}
	l[n1]=inf;
	r[n2]=inf;
	int x=0,y=0;
	for(int i=left ; i<rigth ; i++){
		if(l[x]>r[y]){
			a[i]=r[y];
			y++;
		}
		else{
			a[i]=l[x];
			x++;
		}
	
		m++;
	}
}

void mergesort( int l, int r ){
	if( l+1<r ){
		int mid=(l+r)/2;
		mergesort( l , mid );
		mergesort( mid , r );
		Merge( l , mid , r );
	}
}

int main(){
	
	cin >> n;
	for(int i=0 ; i<n ; i++){
		cin >> a[i];
	}
	
	mergesort( 0 , n );
	
	for(int i=0 ; i<n ; i++){
		cout << a[i];
		if(i!=n-1) printf(" ");
	}
	cout << endl;
	cout << m << endl;
}


/*

*/
