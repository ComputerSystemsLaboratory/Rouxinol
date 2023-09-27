#include<iostream>
using namespace std;
int main()
{
	int a[3],i,j,tmp;
	for(i=0;i<3;i++)
		cin>>a[i];
	for(i=1;i<3;i++){
		tmp=a[i];
		for(j=i;j>0;j--){
			if(tmp<a[j-1])	
				a[j]=a[j-1];
			else
				break;			
		}
		a[j]=tmp;
	}
	cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
	
	return 0;
}
