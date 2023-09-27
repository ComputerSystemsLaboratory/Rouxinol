#include<iostream>
using namespace std;

int main()
{
int a[10],k;
for(int i=0;i<10;i++){
	cin>>a[i];
}

for(int j=0;j<9;j++){
	for(int i=j+1;i<10;i++){
		if(a[j]<a[i]){
		k=a[j];
		a[j]=a[i];
		a[i]=k;}
	}
	
}

for(int i=0;i<3;i++){
	cout<<a[i]<<endl;
}




return 0;
}