#include<iostream>
#include<algorithm>
using namespace std;
static const int N =100001;
int n;
int A[N], L[N], P[N];

// slow implementation
void lis(){
    L[0]=0;
    A[0]=0;
    P[0]=-1;
    int i,j,k;
    for(i=1;i<=n;i++){
	k=0;
	for(j=0;j<i;j++){
	    if(A[j]<A[i] && L[j]>L[k]) k=j;
	}
	L[i]=L[k]+1;
	P[i]=k;
	
    }
}

int MAX(){
    int m=-1,i;
    for(i=1;i<=n;i++){
	if (m<=L[i])m=L[i];
    }
    return m;
}

// quick implementation using DP and binary search
int lis2(){
    L[0]=A[0];
    int len=1;
    
    int i;
    for(i=1;i<n;i++){
	if(L[len-1]<A[i]) L[len++]=A[i];
	
	else *lower_bound(L,L+len,A[i])=A[i];
    }
    return len;
}
	
    


int main(){
    int i;
    cin>>n;
    for(i=0;i<n;i++){
	cin >>A[i];
    }
    /*
    lis();
    
    cout <<MAX() << endl;
    */
    cout << lis2() << endl;
    
    return 0;
}