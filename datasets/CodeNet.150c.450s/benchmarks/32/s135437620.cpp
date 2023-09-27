#include<iostream>
using namespace std;
int main(){
	int a,min,max,p,mmax=0,mm,i,b;
	while(1){
		mmax=0;
		cin>>a>>min>>max;
		if(a==min && min==max && a==0) break;
		for(i=0;i<a;i++){
			cin>>p;
			if(i>=min && i<max+1){
				if(mm-p>=mmax) {
					mmax=mm-p;
					b=i;
				//	cout<<mm<<" "<<p<<" "<<mmax<<endl;
				}
			}
			mm=p;
		}
		cout<<b<<endl;
	}
	return 0;
}