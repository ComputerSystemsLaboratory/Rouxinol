#include<iostream>
using namespace std;
int main(){
	int sinpan,a[100],i,min,max,mini,maxi,sum=0;
	while(1){
		cin>>sinpan;
		if(sinpan==0) break;
		min=1001;
		max=0;
		for(i=0;i<sinpan;i++){
			cin>>a[i];
			if(max<a[i]){
				max=a[i];maxi=i;
			}
			if(min>a[i]){
				min=a[i];mini=i;
			}
		}
		a[maxi]=-1;
		a[mini]=-1;
		for(i=0;i<sinpan;i++){
			if(a[i]!=-1)
			sum+=a[i];
		}
		sum/=(sinpan-2);
		cout<<sum<<endl;
		sum=0;
	}
		return 0;
}