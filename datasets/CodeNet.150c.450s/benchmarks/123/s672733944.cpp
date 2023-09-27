#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,i,x,j,flag=0,cut=0,a;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x;
		a=sqrt(x);
		flag=0;
		for(j=a;j>1;j--){
			if(x%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0)
			cut++;
	}
	cout<<cut<<endl;
	return 0;
}