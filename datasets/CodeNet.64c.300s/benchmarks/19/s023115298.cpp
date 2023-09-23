#include<iostream>
using namespace std;
int main(){
	int n,i,max,a[100000],p,q,pre;
	while(cin>>n,n){
		i=0;
		max=-1000000000;
		while(i!=n)
			cin>>a[i++];
		for(p=0;p<n;p++){
			pre=0;
			for(q=p;q<n;q++){
				pre+=a[q];
				if(pre>max)
					max=pre;
			}
		}
		cout<<max<<endl;
	}
	return 0;
}