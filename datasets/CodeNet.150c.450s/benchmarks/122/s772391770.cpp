#include<bits/stdc++.h>
using namespace std;
int h=0,x;
string s;
int a[2000002];
void add(int i){
	 int t;
	 while (i!=0){
	 	   if (a[i/2]<a[i] && i/2!=0){
	 	       t=a[i]; a[i]=a[i/2]; a[i/2]=t;	
		   }
		   else
		      break;
		   i/=2;
	 }
}
void maxheap(int i){
	 int l=2*i,t,m=i;
	 if (a[l]>a[i] && l<=h)
	    m=l;
	 if (a[l+1]>a[m] && (l+1)<=h)
        m=l+1;
     if (m!=i){
     	t=a[i]; a[i]=a[m]; a[m]=t;
	    maxheap(m);
	 }
}
int main(){
	while (s!="end"){
		  cin>>s;
		  if (s[0]=='i'){
		  	 cin>>a[++h];
		  	 add(h);
		  }
		  if (s[1]=='x'){
		  	 cout<<a[1]<<endl;
		  	 a[1]=a[h];
		  	 h--;
		  	 maxheap(1);
		  }
	}
    return 0;
}

