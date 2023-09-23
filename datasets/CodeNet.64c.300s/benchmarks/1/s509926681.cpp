#include<iostream>
using namespace std;
string s,s1,s2;
int t,n,m,x,tmp,cnt=0,p,pp;
int a[500001];
//int x[500001],y[500001];
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>a[i];
    tmp=a[n-1];
    int i=0,j=0;
    for (j=0; j<n; j++){
    	if (a[j]<=tmp){
    		x=a[j]; a[j]=a[i]; a[i]=x; i++;
    		if (j==n-1)
    		   p=i-1;
		}
	}
	if (p==0)
	   cout<<"["<<a[0]<<"] ";
	   //printf("[%d]",a[0]);
	else
	   cout<<a[0];
	   //printf("%d",a[0]);
	for (int i=1; i<n; i++)
	    if (i==p)
	       cout<<" ["<<a[i]<<"]";
	       //printf(" [%d]",a[i]);
	    else
	       cout<<' '<<a[i];
	       //printf(" %d",a[i]);
	cout<<'\n';
	return 0;
} 
