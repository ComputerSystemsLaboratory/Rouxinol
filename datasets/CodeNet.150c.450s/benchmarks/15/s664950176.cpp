#include <iostream>
using namespace std;

int ar(int *a,int n){
    int num,f=0;
    for (int i=0;i<n;i++) {
        cin>>a[i];
        for(int j=0;j<i;j++)
        if(a[i]==a[j])i--,n--,f++;
		      int tmp=a[i],j;
		      for(j=i-1;j>=0&&tmp<a[j]&&!f;j--)a[j+1]=a[j];
		      a[j+1]=tmp,num=n,f=0;
	   }
    return num;
}

int main(){
    int p,q,a[10000],b[1000],n=0;
    cin>>p,p=ar(a,p);
    cin>>q,q=ar(b,q);
    for(int i=0;i<p;i++)
        for(int j=0;j<q;j++)
            if(a[i]==b[j])n++;
    cout<<n<<endl;
    
    return 0;
}